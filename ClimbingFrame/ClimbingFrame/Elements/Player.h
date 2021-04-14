#pragma once
#include "Element.h"
class Player : public Element
{
private:
public:
	enum Key { ESC = 27, SPACE = 32, s = 115, w = 119, d = 100, a = 97 };
	Player(Coordinates coords);
	bool Move(char key);
	void action() override;
};

