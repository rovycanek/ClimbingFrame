#include <iostream>
#include <vector>
#include "Tools/WindowController.h"
#include "Tools/TimeController.h"
#include "Tools/InputController.h"
#include "Elements/Player.h"
#include "Tools/MapLoader.h"
#include "Elements/Player_Singleton.h"
#include "Elements/Element_Singleton.h"
#include "Types/Coordinates.h"

int  main() {
	TimeController timeControler = TimeController();
	WindowController::InitWindow();
	Player_Singleton::getInstance()->setValue(new Player(Coordinates{ 5, 5 }));
	MapLoader::LoadMap();

	while (true) {
		if (InputController::GetUseInput()) {
			return 0;
		}
		Element_Singleton::getInstance()->actions();
		timeControler.Wait();
	}
}