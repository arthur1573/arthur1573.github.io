@echo off


ECHO GIT CHECKOUT MAIN
git checkout main
ECHO GIT ADD .
git add .
ECHO GIT COMMIT
git commit -m "Auto-committed on %date"
ECHO GIT PUSH
git push
ECHO GIT STATUS
git status

PAUSE