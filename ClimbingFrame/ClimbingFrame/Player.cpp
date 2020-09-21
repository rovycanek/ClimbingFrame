#include "Player.h"

bool Player::Move(char key)
{
	switch (key) {
	case Key::SPACE:

		break;
	case Key::w:
		moveUp();
		visual = '^';
		printElement();
		break;
	case Key::s:
		moveDown();
		visual = 'v';
		printElement();

		break;
	case Key::d:
		moveRight();
		visual = '>';
		printElement();

		break;
	case Key::a:
		moveLeft();
		visual = '<';
		printElement();
		break;
	default:
		break;

	}
	return true;
}
