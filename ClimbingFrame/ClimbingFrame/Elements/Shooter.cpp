#include "Shooter.h"
#include "Element_Singleton.h"
#include "Bullet.h"
#include "../Tools/Time_Controller_Singleton.h"

Shooter::Shooter(Coordinates coords)
{
	coordinates = coords;
	visual = '%';
}

void Shooter::action()
{
	printElement();
	if ((Time_Controller_Singleton::getInstance()->getValue()->Time() % 5) == 0) {
		Element_Singleton::getInstance()->getValue()->push_back(new Bullet(coordinates, RIGHT));
	}
}
