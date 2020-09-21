#pragma once
#include "Element.h"
class Player : Element
{
	
private:
public:
	enum Key { ESC = 27, SPACE = 32, s = 115, w = 119, d = 100, a = 97 };
	Player(int x, int y) {
		coordinates.x = x;
		coordinates.y = y;
		visual = '^';
	}
	bool move(char key) {
		switch (key) {
		case Key::SPACE:

			break;
		case Key::w:
			deletePosition();
			moveUp();
			visual='^';
			printElement();
			break;
		case Key::s:
			deletePosition();
			moveDown();
			visual = 'v';
			printElement();
			
			break;
		case Key::d:
			
			deletePosition();
			moveRight();
			visual = '>';
			printElement();
			
			break;
		case Key::a:
			
			deletePosition();
			moveLeft();
			visual = '<';
			printElement();	
			break;
		default: 
			break;

		}
		return true;
	}

};

