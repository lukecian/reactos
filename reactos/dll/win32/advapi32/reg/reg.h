/*
 * COPYRIGHT:       See COPYING in the top level directory
 * PROJECT:         ReactOS system libraries
 * FILE:            lib/advapi32/reg/reg.c
 * PURPOSE:         Registry functions
 */

#pragma once

/* FUNCTIONS ****************************************************************/
FORCEINLINE
BOOL
IsHKCRKey(_In_ HKEY hKey)
{
    return ((ULONG_PTR)hKey & 0x2) != 0;
}

FORCEINLINE
void
MakeHKCRKey(_Inout_ HKEY* hKey)
{
    *hKey = (HKEY)((ULONG_PTR)(*hKey) | 0x2);
}

LONG
WINAPI
OpenHKCRKey(
    _In_ HKEY hKey,
    _In_ LPCWSTR lpSubKey,
    _In_ DWORD ulOptions,
    _In_ REGSAM samDesired,
    _In_ PHKEY phkResult);
