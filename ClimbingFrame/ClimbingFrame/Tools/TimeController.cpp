#include "TimeController.h"

void TimeController::Wait()
{
	Sleep(40);
	pseudoTime++;
}

int TimeController::Time()
{
	return pseudoTime;
}
