#pragma once
#include <Windows.h>

class TimeController
{
private:
	int pseudoTime = 0;
public:
	//this function stops thread for 40 miliseconds
	void Wait();
	//this function returns how many times was wait called
	int Time();
};

