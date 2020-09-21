#include <iostream>
#include "WindowController.h"
#include "TimeController.h"
#include "InputController.h"
#include "Player.h"
int  main() {
	TimeController timeControler = TimeController();
	WindowController::InitWindow();
	Player player = Player(5, 5);
	while (true) {
		if (InputController::GetUseInput(&player)) {
			return 0;
		}




		timeControler.Wait();
	}
}