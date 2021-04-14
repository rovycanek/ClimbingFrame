#include "WindowController.h"
#include "./../Types/Coordinates.h"

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
	HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_CURSOR_INFO     cursorInfo;

	GetConsoleCursorInfo(out, &cursorInfo);
	cursorInfo.bVisible = false; // set the cursor visibility
	SetConsoleCursorInfo(out, &cursorInfo);
}

void WindowController::InitWindow()
{
	RresizeWindow(250, 100, 900, 500);
	RemoveScrollbar();
	HideCursor();
}

void WindowController::SetCursorPosition(Coordinates c)
{
	HANDLE hOut;
	COORD Position;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	Position.X = c.x;
	Position.Y = c.y;
	SetConsoleCursorPosition(hOut, Position);
}

char WindowController::ReadFromPosition(SHORT x, SHORT y)
{
	char buf[5];
	COORD coord = { x, y };
	DWORD num_read;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	if (ReadConsoleOutputCharacter(hConsole, (LPTSTR)buf, (DWORD)1, coord, (LPDWORD)&num_read) == 0) {
		std::cout << "Error reading console." << std::endl;
		return 1;
	}
	return buf[0];
}
