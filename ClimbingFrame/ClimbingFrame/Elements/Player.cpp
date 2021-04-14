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
		Element_Singleton::getInstance()->getValue()->push_back(new Bullet(coordinates, direction));
		break;
	case Key::w:
		element = Element_Singleton::getInstance()->getValue(Coordinates{ coordinates.x ,coordinates.y - 1 });
		if (element == NULL) {
			moveUp();
		}
		direction = DIRECTION::UP;
		visual = '^';
		printElement();
		break;
	case Key::s:
		element = Element_Singleton::getInstance()->getValue(Coordinates{ coordinates.x ,coordinates.y + 1 });
		if (element == NULL) {
			moveDown();
		}
		direction = DIRECTION::DOWN;
		visual = 'v';
		printElement();

		break;
	case Key::d:
		element = Element_Singleton::getInstance()->getValue(Coordinates{ coordinates.x + 1 ,coordinates.y });
		if (element == NULL) {
			moveRight();
		}
		direction = DIRECTION::RIGHT;
		visual = '>';
		printElement();

		break;
	case Key::a:
		element = Element_Singleton::getInstance()->getValue(Coordinates{ coordinates.x - 1 ,coordinates.y });
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
