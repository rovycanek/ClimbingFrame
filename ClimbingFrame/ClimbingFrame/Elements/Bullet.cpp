#pragma once
#include "Bullet.h"
#include "Element_Singleton.h"
#include "./../Types/Coordinates.h"


void Bullet::action()
{
	Element* element = NULL;
	switch (direction)
	{
	case DIRECTION::DOWN:
		element = Element_Singleton::getInstance()->getValue(coordinates + DIRECTION::DOWN);
		if (element == NULL) {
			moveDown();
			printElement();
		}
		else
		{
			Element_Singleton::getInstance()->deleteValue(this);
		}

		break;
	case DIRECTION::UP:
		element = Element_Singleton::getInstance()->getValue(coordinates + DIRECTION::UP);
		if (element == NULL) {
			moveUp();
			printElement();
		}
		else
		{
			Element_Singleton::getInstance()->deleteValue(this);
		}
		break;
	case DIRECTION::LEFT:
		element = Element_Singleton::getInstance()->getValue(coordinates + DIRECTION::LEFT);
		if (element == NULL) {
			moveLeft();
			printElement();
		}
		else
		{
			Element_Singleton::getInstance()->deleteValue(this);
		}
		break;
	case DIRECTION::RIGHT:
		element = Element_Singleton::getInstance()->getValue(coordinates + DIRECTION::RIGHT);
		if (element == NULL) {
			moveRight();
			printElement();
		}
		else
		{
			Element_Singleton::getInstance()->deleteValue(this);
		}
		break;
	default:
		break;
	PrintInitial = true;
	}
}