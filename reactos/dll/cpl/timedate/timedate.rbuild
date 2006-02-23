<module name="timedate" type="win32dll" extension=".cpl" baseaddress="${BASEADDRESS_TIMEDATE}" installbase="system32" installname="timedate.cpl">
	<importlibrary definition="timedate.def" />
	<include base="timedate">.</include>
	<define name="UNICODE" />
	<define name="_UNICODE" />
	<define name="__REACTOS__" />
	<define name="__USE_W32API" />
	<define name="_WIN32_IE">0x600</define>
	<define name="_WIN32_WINNT">0x501</define>
	<library>kernel32</library>
	<library>user32</library>
	<library>comctl32</library>
	<library>iphlpapi</library>
	<file>timedate.c</file>
	<file>timedate.rc</file>
</module>
