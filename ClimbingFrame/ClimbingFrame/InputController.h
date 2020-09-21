#pragma once
#include <conio.h>
#include "Player.h"
class InputController
{
public:
	enum Key { ESC = 27 };
	static int GetUseInput(Player* player);
	
};

