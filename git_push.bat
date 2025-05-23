@echo off
cd /d %~dp0

:: Get date and time
for /f "tokens=1-5 delims=/: " %%a in ("%date% %time%") do (
    set day=%%a
    set month=%%b
    set year=%%c
    set hour=%%d
    set minute=%%e
)

:: Format: learning dsa - YYYY-MM-DD HH:MM
set commit_msg=learning dsa - %year%-%month%-%day% %hour%:%minute%

echo Adding files...
git add .

echo Committing with message: %commit_msg%
git commit -m "%commit_msg%"

echo Pushing to remote...
git push

pause
