#pragma once
#include <conio.h>
#include "Player.h"
class InputController
{
public:
	enum Key { ESC = 27 };
	static int GetUseInput(Player* player) {
		while (_kbhit()) {				// posun hrace
			char key = _getch();
			if (key == Key::ESC) {
				return 1;
			}
			player->move(key);

		}
		return 0;
	}
	
};

