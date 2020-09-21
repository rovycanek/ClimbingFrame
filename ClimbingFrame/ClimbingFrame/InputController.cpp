#include "InputController.h"

int InputController::GetUseInput(Player* player)
{
	while (_kbhit()) {
		char key = _getch();
		if (key == Key::ESC) {
			return 1;
		}
		player->Move(key);

	}
	return 0;
}
