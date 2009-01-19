<?xml version="1.0"?>
<!DOCTYPE module SYSTEM "../../../tools/rbuild/project.dtd">
<module name="setupldr_main" type="objectlibrary">
	<include base="setupldr_main">include</include>
	<include base="ntoskrnl">include</include>
	<define name="_NTHAL_" />
	<define name="FREELDR_ROS_SETUP" />
	<compilerflag>-ffreestanding</compilerflag>
	<compilerflag>-fno-builtin</compilerflag>
	<compilerflag>-fno-inline</compilerflag>
	<compilerflag>-fno-zero-initialized-in-bss</compilerflag>
	<compilerflag>-Os</compilerflag>

	<file>bootmgr.c</file>

	<directory name="inffile">
		<file>inffile.c</file>
	</directory>
	<directory name="reactos">
	  <file>setupldr.c</file>
	</directory>
</module>
