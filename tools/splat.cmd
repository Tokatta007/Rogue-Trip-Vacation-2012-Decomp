@echo off
setlocal
rem Regenerate symbols from discovery, run splat on SLUS_006.43, verify round-trip.
rem Needs the splat checkout with its .venv; by default at PROJECT\tools\splat when this
rem repository is in PROJECT\references\ (override with SPLAT_DIR).
if "%SPLAT_DIR%"=="" set "SPLAT_DIR=%~dp0..\..\..\tools\splat"
"%~dp0..\toolchain\python\python.exe" -B "%~dp0gen_splat_symbols.py" || exit /b 1
"%SPLAT_DIR%\.venv\Scripts\python.exe" "%SPLAT_DIR%\split.py" "%~dp0..\config\splat.us.yaml" || exit /b 1
"%~dp0..\toolchain\python\python.exe" -B "%~dp0splat_roundtrip.py"
exit /b %errorlevel%
