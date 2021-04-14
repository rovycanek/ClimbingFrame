#include "InputController.h"
#include "./../Elements/Player_Singleton.h"

int InputController::GetUseInput()
{
	while (_kbhit()) {
		char key = _getch();
		if (key == Key::ESC) {
			return 1;
		}
		Player_Singleton::getInstance()->getValue()->Move(key);
	}
	return 0;
}
