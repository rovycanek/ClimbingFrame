#include <iostream>
#include <vector>
#include "WindowController.h"
#include "TimeController.h"
#include "InputController.h"
#include "Element.h"
#include "Player.h"
#include "MapLoader.h"


int  main() {
	TimeController timeControler = TimeController();
	WindowController::InitWindow();
	Player player = Player(5, 5);
	std::vector<Element> elements;
	MapLoader::LoadMap(&elements);

	while (true) {
		if (InputController::GetUseInput(&player)) {
			return 0;
		}
		for (Element& element : elements) {
			element.action();
		}



		timeControler.Wait();
	}
}