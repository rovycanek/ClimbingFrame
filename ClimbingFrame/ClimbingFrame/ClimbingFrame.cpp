#include <iostream>
#include "WindowController.h"
#include "TimeController.h"
#include "InputController.h"

int  main() {
	TimeController timeControler = TimeController();
	WindowController::InitWindow();
	while (true) {
		if (InputController::GetUseInput()) {
			return 0;
		}




		timeControler.Wait();
	}
}