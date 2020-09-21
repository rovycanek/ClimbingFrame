#include "Element.h"
#include <iostream>
#include "WindowController.h"

void Element::deletePosition()
{
	WindowController::SetCursorPosition(coordinates);
	std::cout << " ";
}

void Element::printElement()
{
	if (print) {
		WindowController::SetCursorPosition(coordinates);
		std::cout << visual;
	}
	print = false;

}

void Element::moveLeft()
{
	print = true;
	coordinates.x--;
}

void Element::moveRight()
{
	print = true;
	coordinates.x++;

}

void Element::moveUp()
{
	print = true;
	coordinates.y--;

}

void Element::moveDown()
{
	print = true;
	coordinates.y++;
}
