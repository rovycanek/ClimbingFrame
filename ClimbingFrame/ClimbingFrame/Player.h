#pragma once
#include "Element.h"
class Player : public Element
{
	
private:
public:
	enum Key { ESC = 27, SPACE = 32, s = 115, w = 119, d = 100, a = 97 };
	Player(int x, int y) {
		coordinates.x = x;
		coordinates.y = y;
		visual = '^';
	}
	bool Move(char key);
};

