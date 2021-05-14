#include <iostream>
#include <vector>
#include "Tools/WindowController.h"
#include "Tools/Time_Controller_Singleton.h"
#include "Tools/InputController.h"
#include "Elements/Player.h"
#include "Tools/MapLoader.h"
#include "Elements/Player_Singleton.h"
#include "Elements/Element_Singleton.h"
#include "Elements/Shooter.h"
#include "Types/Coordinates.h"

int  main() {
	WindowController::InitWindow();
	Player_Singleton::getInstance()->setValue(new Player(Coordinates{ 5, 5 }));
	MapLoader::LoadMap();

	Element_Singleton::getInstance()->getValue()->push_back(new Shooter(Coordinates{ 8, 8 }));

	while (true) {
		if (InputController::GetUseInput()) {
			return 0;
		}
		Element_Singleton::getInstance()->actions();
		Time_Controller_Singleton::getInstance()->getValue()->Wait();
	}
}