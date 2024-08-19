// windows_processes_basic.cpp : Defines the entry point for the application.
//

#include<windows.h>
#include<stdio.h>

int main()
{
	STARTUPINFO si;
	PROCESS_INFORMATION pi;

	ZeroMemory(&si, sizeof(si));
	si.cb = sizeof(si);
	ZeroMemory(&si, sizeof(si));
	
	CreateProcessA(NULL, "C:\\Windows\\System32\\calc.exe", NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi);
	return 0;
}
