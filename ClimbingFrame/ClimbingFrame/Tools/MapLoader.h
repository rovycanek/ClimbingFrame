#pragma once
#include <vector>
#include <Windows.h>

class MapLoader
{
private:
	static SHORT ReturnXsize();
	static SHORT ReturnYsize();
	static void PrintMap();
public:
	static void LoadMap();
};

