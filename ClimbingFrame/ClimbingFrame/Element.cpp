#include "Element.h"
#include <iostream>
#include "WindowController.h"

void Element::deletePosition()
{
	if (print) {
		WindowController::SetCursorPosition(coordinates);
		std::cout << " ";
	}
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
	deletePosition();
	coordinates.x--;
}

void Element::moveRight()
{
	print = true;
	deletePosition();
	coordinates.x++;

}

void Element::moveUp()
{
	print = true;
	deletePosition();
	coordinates.y--;

}

void Element::moveDown()
{
	print = true;
	deletePosition();
	coordinates.y++;
}

void Element::action()
{
	deletePosition();
	printElement();
}
