' Скрипт находит сменные накопители на компьютере (кроме A:)
' Выдаёт диалог на выбор конкретного
' Запускает указанный батник с параметром - именем (путём) диска

Bat = "Batnik.bat"      '- батник, который запускаетcя скриптом
			'- если батник не рядом со скриптом-указать полный путь

Set WS = CreateObject("WScript.Shell")
Set FSO = CreateObject("Scripting.FileSystemObject")
Set Disks = FSO.Drives

L = True

Do While L = True
For Each Disk In Disks
    DPath = Disk.Path
    If Disk.DriveType = 1 And Disk.IsReady And UCase(DPath) <> "A:" Then
	Set objFSO = CreateObject("Scripting.FileSystemObject")
	If objFSO.FolderExists(DPath+"\физика") Then
		L = False
        	Ret = WS.Run("cmd /c " + Bat + " " + DPath, 0, False)
    	End If
    End If
Next
Loop