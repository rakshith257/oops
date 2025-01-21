@echo off
echo Compiling polymorp.cpp...
g++ polymorp.cpp -o polymorp.exe
if errorlevel 1 (
    echo Compilation failed.
    pause
    exit /b
)
echo Running polymorp.exe...
polymorp.exe

