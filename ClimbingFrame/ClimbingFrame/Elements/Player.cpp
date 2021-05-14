#include "Player.h"
#include <cstddef>
#include "Element_Singleton.h"
#include "Bullet.h"

Player::Player(Coordinates coords)
{
	coordinates = coords;
	visual = '^';
}

bool Player::Move(char key)
{
	Element* element = NULL;
	switch (key) {
	case Key::SPACE:
		element = Element_Singleton::getInstance()->getValue(coordinates + direction);
		if (element == NULL) {
			Element_Singleton::getInstance()->getValue()->push_back(new Bullet(coordinates, direction));
		}
		
		break;
	case Key::w:
		element = Element_Singleton::getInstance()->getValue(coordinates + DIRECTION::UP);
		if (element == NULL) {
			moveUp();
		}
		direction = DIRECTION::UP;
		visual = '^';
		printElement();
		break;
	case Key::s:
		element = Element_Singleton::getInstance()->getValue(coordinates + DIRECTION::DOWN);
		if (element == NULL) {
			moveDown();
		}
		direction = DIRECTION::DOWN;
		visual = 'v';
		printElement();

		break;
	case Key::d:
		element = Element_Singleton::getInstance()->getValue(coordinates + DIRECTION::RIGHT);
		if (element == NULL) {
			moveRight();
		}
		direction = DIRECTION::RIGHT;
		visual = '>';
		printElement();

		break;
	case Key::a:
		element = Element_Singleton::getInstance()->getValue(coordinates + DIRECTION::LEFT);
		if (element == NULL) {
			moveLeft();
		}
		direction = DIRECTION::LEFT;
		visual = '<';
		printElement();
		break;
	default:
		break;

	}
	return true;
}

void Player::action()
{
}
