REM global constants
set CB_DIR=D:\Dev\CodeBlocks\
set MINGW_DIR=D:\Dev\MinGW\

set TOP_DIR=%~dp0%
if "%TOP_DIR:~-1%"=="\" set TOP_DIR=%TOP_DIR:~0,-1%
REM remove "eagle-emu\tools"
set TOP_DIR=%TOP_DIR:~0,-15%
set EMU_DIR=%TOP_DIR%eagle-emu\
