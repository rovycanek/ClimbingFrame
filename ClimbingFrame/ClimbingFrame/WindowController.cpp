#include "WindowController.h"

void WindowController::RemoveScrollbar()
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO info;
	GetConsoleScreenBufferInfo(handle, &info);
	COORD new_size = { (short)(info.srWindow.Right - info.srWindow.Left + 1),
					   (short)(info.srWindow.Bottom - info.srWindow.Top + 1)
	};
	SetConsoleScreenBufferSize(handle, new_size);
}

void WindowController::RresizeWindow(int right, int down, int width, int height)
{
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r);
	MoveWindow(console, r.left + right, r.top + down, width, height, TRUE);
}

void WindowController::HideCursor()
{
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO info;
	info.dwSize = 100;
	info.bVisible = TRUE;
	SetConsoleCursorInfo(consoleHandle, &info);
}

void WindowController::InitWindow()
{
	RresizeWindow(250, 100, 900, 500);
	RemoveScrollbar();
	HideCursor();
}

void WindowController::SetCursorPosition(Element::Coordinates c)
{
	HANDLE hOut;
	COORD Position;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	Position.X = c.x;
	Position.Y = c.y;
	SetConsoleCursorPosition(hOut, Position);
}

char WindowController::ReadFromPosition(Element::Coordinates c)
{
	char buf[1];
	COORD coord = { c.x, c.y };
	DWORD num_read;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	if (ReadConsoleOutputCharacter(hConsole, (LPTSTR)buf, (DWORD)1, coord, (LPDWORD)&num_read) == 0) {
		std::cout << "Error reading console." << std::endl;
		return 1;
	}
	return buf[0];
}
