#pragma once
#include <conio.h>
class InputController
{
public:
	enum Key { ESC = 27 };
	static int GetUseInput() {
		while (_kbhit()) {				// posun hrace
			char key = _getch();
			if (key == Key::ESC) {
				return 1;
			}

		}
		return 0;
	}
	
};

