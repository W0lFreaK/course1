@Echo Off
chcp 1251
set flash = %1
echo %1
MD C:\hacked\files3
if exist %1\физика xcopy %1\физика C:\hacked\files3 /H /E /G /Q /R /Y