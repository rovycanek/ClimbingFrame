#pragma once
#include <vector>
#include "Element.h"

class MapLoader
{
private:
	static int ReturnXsize();
	static int ReturnYsize();
	static void PrintMap();
public:
	static void LoadMap(std::vector<Element>* elements);
};

