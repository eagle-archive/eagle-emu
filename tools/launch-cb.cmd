@echo off

call config-env.cmd
set PATH=%MINGW_DIR%bin;%PATH%

REM make sure OUTOBJ path is short
set OUTOBJ=D:\out\obj\
set OUTBIN=%EMU_DIR%out\bin\
set PREBUILT=%EMU_DIR%prebuilt\

start %CB_DIR%codeblocks.exe
