@echo off
set BIT=%1
if "%BIT%" == "32" set VER=86
if "%BIT%" == "64" set VER=64
set "VSROOT=X:\Program Files"
set "WDKVER=10.0.22621.0"
set "BUILDTOOLSPATH=%VSROOT%\Microsoft Visual Studio\2022\BuildTools"
set "WDKROOT=%VSROOT%\Windows Kits\10"
set "WDKLIB=%WDKROOT%\Lib\%WDKVER%"
call "%BUILDTOOLSPATH%\VC\Auxiliary\Build\vcvars%BIT%.bat"
set "INCLUDE=%WDKROOT%\Include\%WDKVER%\ucrt;%INCLUDE%"
set "LIB=%WDKLIB%\ucrt\x%VER%;%WDKLIB%\um\x%VER%;%LIB%"