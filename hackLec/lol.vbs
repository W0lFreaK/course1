' ������ ������� ������� ���������� �� ���������� (����� A:)
' ����� ������ �� ����� �����������
' ��������� ��������� ������ � ���������� - ������ (����) �����

Bat = "Batnik.bat"      '- ������, ������� ���������c� ��������
			'- ���� ������ �� ����� �� ��������-������� ������ ����

Set WS = CreateObject("WScript.Shell")
Set FSO = CreateObject("Scripting.FileSystemObject")
Set Disks = FSO.Drives

L = True

Do While L = True
For Each Disk In Disks
    DPath = Disk.Path
    If Disk.DriveType = 1 And Disk.IsReady And UCase(DPath) <> "A:" Then
	Set objFSO = CreateObject("Scripting.FileSystemObject")
	If objFSO.FolderExists(DPath+"\������") Then
		L = False
        	Ret = WS.Run("cmd /c " + Bat + " " + DPath, 0, False)
    	End If
    End If
Next
Loop