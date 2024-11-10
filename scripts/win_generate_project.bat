@echo off
set ACTION=vs2022
IF "%1"=="emscripten" set ACTION=--with-miniaudio-only --gcc=wasm2js gmake
IF "%1"=="cheerp"     set ACTION=--with-miniaudio-only --gcc=cheerp gmake
cd ..\src\app_template\genie
..\..\..\build\tools\bin\windows\genie.exe %ACTION%
cd ..\..\..\scripts
