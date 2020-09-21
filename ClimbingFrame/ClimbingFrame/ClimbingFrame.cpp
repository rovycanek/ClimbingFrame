#include <iostream>
#include "WindowController.h"
#include "TimeController.h"

void main() {
	TimeController timeControler = TimeController();
	WindowController::InitWindow();
	while (true) {

		timeControler.wait();
	}
}