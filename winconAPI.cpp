#include <windows.h>
#include <conio.h>

HANDLE getHandle(char type)
{
	// return a specific handle
	if(type == 'O')
		return GetStdHandle(STD_OUTPUT_HANDLE);
	else if(type == 'I')
		return GetStdHandle(STD_INPUT_HANDLE);
	else
		return GetStdHandle(STD_ERROR_HANDLE); 
}
void gotoxy(int x, int y)
{
	// set cursor to column x line y
	COORD pos = {x, y};
	SetConsoleCursorPosition(getHandle('O'), pos);
}

void hideCursor()
{
	// hide cursor, used together with showCursor
	CONSOLE_CURSOR_INFO newCursor = {2, false};
	SetConsoleCursorInfo(getHandle('O'), &newCursor);
}

void showCursor()
{
	// show cursor, used together with hideCursor
	CONSOLE_CURSOR_INFO newCursor = {2, true};
	SetConsoleCursorInfo(getHandle('O'), &newCursor);
}

void pause()
{
	// pause for one key
	getch();
}


