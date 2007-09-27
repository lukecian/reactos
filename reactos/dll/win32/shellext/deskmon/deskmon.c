#include "precomp.h"

#define NDEBUG
#include <debug.h>

static HINSTANCE hInstance;

#if 0
#ifdef UNICODE
typedef INT_PTR (WINAPI *PDEVICEPROPERTIES)(HWND,LPCWSTR,LPCWSTR,BOOL);
#define FUNC_DEVICEPROPERTIES "DevicePropertiesW"
#else
typedef INT_PTR (WINAPI *PDEVICEPROPERTIES)(HWND,LPCWSTR,LPCSTR,BOOL);
#define FUNC_DEVICEPROPERTIES "DevicePropertiesA"
#endif

static VOID
ShowMonitorProperties(PDESKMONITOR This,
                      LPCTSTR lpDevice)
{
    HMODULE hDevMgr;
    PDEVICEPROPERTIES pDeviceProperties;

    hDevMgr = LoadLibrary(TEXT("devmgr.dll"));
    if (hDevMgr != NULL)
    {
        pDeviceProperties = (PDEVICEPROPERTIESW)GetProcAddress(hDevMgr,
                                                               FUNC_DEVICEPROPERTIES);
        if (pDeviceProperties != NULL)
        {
            pDeviceProperties(This->hwndDlg,
                               NULL,
                               lpDevice,
                               FALSE);
        }

        FreeLibrary(hDevMgr);
    }
}
#endif

static VOID
UpdateMonitorDialogControls(PDESKMONITOR This)
{
    PDEVMODEW lpCurrentMode, lpMode;
    DWORD dwIndex = 0;
    TCHAR szBuffer[64];
    BOOL bHasDef = FALSE;
    INT i;

    /* Fill the refresh rate combo box */
    SendDlgItemMessage(This->hwndDlg,
                       IDC_REFRESHRATE,
                       CB_RESETCONTENT,
                       0,
                       0);

    lpCurrentMode = This->DeskExtInterface->GetCurrentMode(This->DeskExtInterface->Context);

    do
    {
        lpMode = This->DeskExtInterface->EnumAllModes(This->DeskExtInterface->Context,
                                                      dwIndex++);
        if (lpMode != NULL &&
            lpMode->dmBitsPerPel == lpCurrentMode->dmBitsPerPel &&
            lpMode->dmPelsWidth == lpCurrentMode->dmPelsWidth &&
            lpMode->dmPelsHeight == lpCurrentMode->dmPelsHeight)
        {
            /* We're only interested in refresh rates for the current resolution and color depth */

            if (lpMode->dmDisplayFrequency <= 1)
            {
                /* Default hardware frequency */
                if (bHasDef)
                    continue;

                bHasDef = TRUE;

                if (!LoadString(hInstance,
                                IDS_USEDEFFRQUENCY,
                                szBuffer,
                                sizeof(szBuffer) / sizeof(szBuffer[0])))
                {
                    szBuffer[0] = TEXT('\0');
                }
            }
            else
            {
                TCHAR szFmt[64];

                if (!LoadString(hInstance,
                                IDS_FREQFMT,
                                szFmt,
                                sizeof(szFmt) / sizeof(szFmt[0])))
                {
                    szFmt[0] = TEXT('\0');
                }

                _sntprintf(szBuffer,
                           sizeof(szBuffer) / sizeof(szBuffer[0]),
                           szFmt,
                           lpMode->dmDisplayFrequency);
            }

            i = (INT)SendDlgItemMessage(This->hwndDlg,
                                        IDC_REFRESHRATE,
                                        CB_ADDSTRING,
                                        0,
                                        (LPARAM)szBuffer);
            if (i >= 0)
            {
                SendDlgItemMessage(This->hwndDlg,
                                   IDC_REFRESHRATE,
                                   CB_SETITEMDATA,
                                   (WPARAM)lpMode,
                                   0);

                if (lpMode->dmDisplayFrequency == lpCurrentMode->dmDisplayFrequency)
                {
                    SendDlgItemMessage(This->hwndDlg,
                                       IDC_REFRESHRATE,
                                       CB_SETCURSEL,
                                       (WPARAM)i,
                                       0);
                }
            }
        }

    } while (lpMode != NULL);

    /* FIXME: Update pruning mode controls */

    /* FIXME: Enable/Disable properties button */
    EnableWindow(GetDlgItem(This->hwndDlg,
                            IDC_MONITORPROPERTIES),
                 FALSE);
}

static VOID
InitMonitorDialog(PDESKMONITOR This)
{
    PDESKMONINFO pmi, pminext, *pmilink;
    DISPLAY_DEVICE dd;
    BOOL bRet;
    INT i;
    DWORD dwIndex = 0;

    /* Free all allocated monitors */
    pmi = This->Monitors;
    This->Monitors = NULL;
    while (pmi != NULL)
    {
        pminext = pmi->Next;
        LocalFree((HLOCAL)pmi);
        pmi = pminext;
    }

    This->SelMonitor = NULL;
    This->dwMonitorCount = 0;

    if (This->lpDisplayDevice != NULL)
        LocalFree((HLOCAL)This->lpDisplayDevice);

    This->lpDisplayDevice = QueryDeskCplString(This->pdtobj,
                                               RegisterClipboardFormat(DESK_EXT_DISPLAYDEVICE));

    if (This->DeskExtInterface != NULL)
    {
        if (This->lpDisplayDevice != NULL)
        {
            /* Enumerate all monitors */
            pmilink = &This->Monitors;

            do
            {
                dd.cb = sizeof(dd);
                bRet = EnumDisplayDevices(This->lpDisplayDevice,
                                          dwIndex++,
                                          &dd,
                                          0);
                if (bRet)
                {
                    pmi = LocalAlloc(LMEM_FIXED,
                                     sizeof(*pmi));
                    if (pmi != NULL)
                    {
                        CopyMemory(&pmi->dd,
                                   &dd,
                                   sizeof(dd));
                        pmi->Next = NULL;
                        *pmilink = pmi;
                        pmilink = &pmi->Next;

                        This->dwMonitorCount++;
                    }
                }
            } while (bRet);
        }

        This->lpDevModeOnInit = This->DeskExtInterface->GetCurrentMode(This->DeskExtInterface->Context);
    }
    else
        This->lpDevModeOnInit = NULL;

    /* Setup the UI depending on how many monitors are attached */
    if (This->dwMonitorCount == 0)
    {
        LPTSTR lpMonitorName;

        /* This is a fallback, let's hope that desk.cpl can provide us with a monitor name */
        lpMonitorName = QueryDeskCplString(This->pdtobj,
                                           RegisterClipboardFormat(DESK_EXT_MONITORNAME));

        SetDlgItemText(This->hwndDlg,
                       IDC_MONITORNAME,
                       lpMonitorName);

        if (lpMonitorName != NULL)
            LocalFree((HLOCAL)lpMonitorName);
    }
    else if (This->dwMonitorCount == 1)
    {
        This->SelMonitor = This->Monitors;
        SetDlgItemText(This->hwndDlg,
                       IDC_MONITORNAME,
                       This->Monitors->dd.DeviceString);
    }
    else
    {
        SendDlgItemMessage(This->hwndDlg,
                           IDC_MONITORLIST,
                           LB_RESETCONTENT,
                           0,
                           0);

        pmi = This->Monitors;
        while (pmi != NULL)
        {
            i = (INT)SendDlgItemMessage(This->hwndDlg,
                                        IDC_MONITORLIST,
                                        LB_ADDSTRING,
                                        0,
                                        (LPARAM)pmi->dd.DeviceString);
            if (i >= 0)
            {
                SendDlgItemMessage(This->hwndDlg,
                                   IDC_MONITORLIST,
                                   LB_SETITEMDATA,
                                   (WPARAM)i,
                                   (LPARAM)pmi);

                if (This->SelMonitor == NULL)
                {
                    SendDlgItemMessage(This->hwndDlg,
                                       IDC_MONITORLIST,
                                       LB_SETCURSEL,
                                       (WPARAM)i,
                                       0);

                    This->SelMonitor = pmi;
                }
            }

            pmi = pmi->Next;
        }
    }

    /* Show/Hide controls */
    ShowWindow(GetDlgItem(This->hwndDlg,
                          IDC_MONITORNAME),
               (This->dwMonitorCount <= 1 ? SW_SHOW : SW_HIDE));
    ShowWindow(GetDlgItem(This->hwndDlg,
                          IDC_MONITORLIST),
               (This->dwMonitorCount > 1 ? SW_SHOW : SW_HIDE));

    UpdateMonitorDialogControls(This);
}

static LONG
ApplyMonitorChanges(PDESKMONITOR This)
{
    LONG lChangeRet;

    if (This->DeskExtInterface != NULL)
    {
        /* Change the display settings through desk.cpl */
        lChangeRet = DeskCplExtDisplaySaveSettings(This->DeskExtInterface,
                                                   This->hwndDlg);
        if (lChangeRet == DISP_CHANGE_SUCCESSFUL)
        {
            /* Save the new mode */
            This->lpDevModeOnInit = This->DeskExtInterface->GetCurrentMode(This->DeskExtInterface->Context);
            return PSNRET_NOERROR;
        }
        else if (lChangeRet == DISP_CHANGE_RESTART)
        {
            /* Notify desk.cpl that the user needs to reboot */
            PropSheet_RestartWindows(GetParent(This->hwndDlg));
            return PSNRET_NOERROR;
        }
    }

    InitMonitorDialog(This);

    return PSNRET_INVALID_NOCHANGEPAGE;
}

static VOID
ResetMonitorChanges(PDESKMONITOR This)
{
    if (This->DeskExtInterface != NULL && This->lpDevModeOnInit != NULL)
    {
        This->DeskExtInterface->SetCurrentMode(This->DeskExtInterface->Context,
                                               This->lpDevModeOnInit);
    }
}

static BOOL
UpdateMonitorSelection(PDESKMONITOR This)
{
    INT i;

    if (This->dwMonitorCount <= 1)
        return FALSE;

    i = (INT)SendDlgItemMessage(This->hwndDlg,
                                IDC_MONITORLIST,
                                LB_GETCURSEL,
                                0,
                                0);
    if (i >= 0)
    {
        This->SelMonitor = (PDESKMONINFO)SendDlgItemMessage(This->hwndDlg,
                                                            IDC_MONITORLIST,
                                                            LB_GETITEMDATA,
                                                            (WPARAM)i,
                                                            0);
    }
    else
        This->SelMonitor = NULL;

    return TRUE;
}

static INT_PTR CALLBACK
MonitorDlgProc(HWND hwndDlg,
               UINT uMsg,
               WPARAM wParam,
               LPARAM lParam)
{
    PDESKMONITOR This;
    INT_PTR Ret = 0;

    if (uMsg != WM_INITDIALOG)
    {
        This = (PDESKMONITOR)GetWindowLongPtr(hwndDlg,
                                              DWL_USER);
    }

    switch (uMsg)
    {
        case WM_INITDIALOG:
            This = (PDESKMONITOR)((LPCPROPSHEETPAGE)lParam)->lParam;
            This->hwndDlg = hwndDlg;
            SetWindowLongPtr(hwndDlg,
                             DWL_USER,
                             (LONG_PTR)This);

            InitMonitorDialog(This);
            Ret = TRUE;
            break;

        case WM_COMMAND:
            switch (LOWORD(wParam))
            {
                case IDC_MONITORPROPERTIES:
                    break;

                case IDC_MONITORLIST:
                    if (HIWORD(wParam) == LBN_SELCHANGE)
                    {
                        if (UpdateMonitorSelection(This))
                            UpdateMonitorDialogControls(This);
                    }
                    break;
            }
            break;

        case WM_NOTIFY:
        {
            NMHDR *nmh = (NMHDR *)lParam;

            switch (nmh->code)
            {
                case PSN_APPLY:
                {
                    SetWindowLong(hwndDlg,
                                  DWL_MSGRESULT,
                                  ApplyMonitorChanges(This));
                    break;
                }

                case PSN_RESET:
                    ResetMonitorChanges(This);
                    break;
            }
            break;
        }
    }

    return Ret;
}

static VOID
IDeskMonitor_Destroy(PDESKMONITOR This)
{
    PDESKMONINFO pmi, pminext;

    if (This->pdtobj != NULL)
    {
        IDataObject_Release(This->pdtobj);
        This->pdtobj = NULL;
    }

    if (This->DeskExtInterface != NULL)
    {
        LocalFree((HLOCAL)This->DeskExtInterface);
        This->DeskExtInterface = NULL;
    }

    if (This->lpDisplayDevice != NULL)
    {
        LocalFree((HLOCAL)This->lpDisplayDevice);
        This->lpDisplayDevice = NULL;
    }

    /* Free all monitors */
    pmi = This->Monitors;
    This->Monitors = NULL;
    while (pmi != NULL)
    {
        pminext = pmi->Next;
        LocalFree((HLOCAL)pmi);
        pmi = pminext;
    }
}

ULONG
IDeskMonitor_AddRef(PDESKMONITOR This)
{
    ULONG ret;

    ret = InterlockedIncrement((PLONG)&This->ref);
    if (ret == 1)
        InterlockedIncrement(&dll_refs);

    return ret;
}

ULONG
IDeskMonitor_Release(PDESKMONITOR This)
{
    ULONG ret;

    ret = InterlockedDecrement((PLONG)&This->ref);
    if (ret == 0)
    {
        IDeskMonitor_Destroy(This);
        InterlockedDecrement(&dll_refs);

        HeapFree(GetProcessHeap(),
                 0,
                 This);
    }

    return ret;
}

HRESULT STDMETHODCALLTYPE
IDeskMonitor_QueryInterface(PDESKMONITOR This,
                            REFIID iid,
                            PVOID *pvObject)
{
    *pvObject = NULL;

    if (IsEqualIID(iid,
                   &IID_IShellPropSheetExt) ||
        IsEqualIID(iid,
                   &IID_IUnknown))
    {
        *pvObject = impl_to_interface(This, IShellPropSheetExt);
    }
    else if (IsEqualIID(iid,
                        &IID_IShellExtInit))
    {
        *pvObject = impl_to_interface(This, IShellExtInit);
    }
    else if (IsEqualIID(iid,
                        &IID_IClassFactory))
    {
        *pvObject = impl_to_interface(This, IClassFactory);
    }
    else
    {
        DPRINT1("IDeskMonitor::QueryInterface(%p,%p): E_NOINTERFACE\n", iid, pvObject);
        return E_NOINTERFACE;
    }

    IDeskMonitor_AddRef(This);
    return S_OK;
}

HRESULT
IDeskMonitor_Initialize(PDESKMONITOR This,
                        LPCITEMIDLIST pidlFolder,
                        IDataObject *pdtobj,
                        HKEY hkeyProgID)
{
    DPRINT1("IDeskMonitor::Initialize(%p,%p,%p)\n", pidlFolder, pdtobj, hkeyProgID);

    if (pdtobj != NULL)
    {
        IDataObject_AddRef(pdtobj);
        This->pdtobj = pdtobj;

        /* Get a copy of the desk.cpl extension interface */
        This->DeskExtInterface = QueryDeskCplExtInterface(This->pdtobj);
        if (This->DeskExtInterface != NULL)
            return S_OK;
    }

    return S_FALSE;
}

HRESULT
IDeskMonitor_AddPages(PDESKMONITOR This,
                      LPFNADDPROPSHEETPAGE pfnAddPage,
                      LPARAM lParam)
{
    HPROPSHEETPAGE hpsp;
    PROPSHEETPAGE psp;

    DPRINT1("IDeskMonitor::AddPages(%p,%p)\n", pfnAddPage, lParam);

    psp.dwSize = sizeof(psp);
    psp.dwFlags = PSP_DEFAULT;
    psp.hInstance = hInstance;
    psp.pszTemplate = MAKEINTRESOURCE(IDD_MONITOR);
    psp.pfnDlgProc = MonitorDlgProc;
    psp.lParam = (LPARAM)This;

    hpsp = CreatePropertySheetPage(&psp);
    if (hpsp != NULL && pfnAddPage(hpsp, lParam))
        return S_OK;

    return S_FALSE;
}

HRESULT
IDeskMonitor_ReplacePage(PDESKMONITOR This,
                         EXPPS uPageID,
                         LPFNADDPROPSHEETPAGE pfnReplacePage,
                         LPARAM lParam)
{
    DPRINT1("IDeskMonitor::ReplacePage(%u,%p,%p)\n", uPageID, pfnReplacePage, lParam);
    return E_NOTIMPL;
}

HRESULT
IDeskMonitor_Constructor(REFIID riid,
                         LPVOID *ppv)
{
    PDESKMONITOR This;
    HRESULT hRet = E_OUTOFMEMORY;

    DPRINT1("IDeskMonitor::Constructor(%p,%p)\n", riid, ppv);

    This = HeapAlloc(GetProcessHeap(),
                     0,
                     sizeof(*This));
    if (This != NULL)
    {
        ZeroMemory(This,
                   sizeof(*This));

        IDeskMonitor_InitIface(This);

        hRet = IDeskMonitor_QueryInterface(This,
                                           riid,
                                           ppv);
        if (!SUCCEEDED(hRet))
            IDeskMonitor_Release(This);
    }

    return hRet;
}

BOOL STDCALL
DllMain(HINSTANCE hinstDLL,
        DWORD dwReason,
        LPVOID lpvReserved)
{
    switch (dwReason)
    {
        case DLL_PROCESS_ATTACH:
            hInstance = hinstDLL;
            DisableThreadLibraryCalls(hInstance);
            break;
    }

    return TRUE;
}
