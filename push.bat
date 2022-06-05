@echo off

ECHO GIT ADD .
git add .
ECHO
ECHO GIT COMMIT
git commit -m "Auto-committed on %date"
ECHO GIT PUSH
git push

PAUSE