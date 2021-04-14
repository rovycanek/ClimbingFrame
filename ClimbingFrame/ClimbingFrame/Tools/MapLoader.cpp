#include "MapLoader.h"
#include "WindowController.h"
#include "./../Elements/Wall.h"
#include "./../Elements/Element_Singleton.h"

SHORT MapLoader::ReturnXsize()
{
	SHORT x = 0, y = 0;
	SHORT size = 0;
	while (WindowController::ReadFromPosition(x, y) == '#') {
		size++;
		x++;
	}
	return size;
}

SHORT MapLoader::ReturnYsize()
{
	SHORT x = 0, y = 0;
	SHORT size = 0;
	while (WindowController::ReadFromPosition(x, y) == '#') {
		size++;
		y++;
	}
	return size;
}

void MapLoader::PrintMap()
{
	std::cout << "###########################################################################################" << std::endl;
	std::cout << "#                         #                                                               #" << std::endl;
	std::cout << "#                         #                                                               #" << std::endl;
	std::cout << "#                         #                                                               #" << std::endl;
	std::cout << "#                         #             #                                                 #" << std::endl;
	std::cout << "#                         #             #                                                 #" << std::endl;
	std::cout << "#                         #             #                                                 #" << std::endl;
	std::cout << "#                         #             #                                                 #" << std::endl;
	std::cout << "#                         #             #                                                 #" << std::endl;
	std::cout << "###############                         #                                                 #" << std::endl;
	std::cout << "#             #                         #                                                 #" << std::endl;
	std::cout << "#             #                         #                                                 #" << std::endl;
	std::cout << "#                                       #                                                 #" << std::endl;
	std::cout << "#             #                         #                                                 #" << std::endl;
	std::cout << "#             #                         #                                                 #" << std::endl;
	std::cout << "#             #                         #                                                 #" << std::endl;
	std::cout << "###########################################################################################" << std::endl;
}

void MapLoader::LoadMap(){

	PrintMap();
	auto sizeX = ReturnXsize();
	auto sizeY = ReturnYsize();
	for (auto y = 0; y < sizeY; y++) {
		for (auto x = 0; x < sizeX; x++) {
			switch (WindowController::ReadFromPosition(x, y)) {
			case '#':
				Element_Singleton::getInstance()->getValue()->push_back(new Wall((int)x, (int)y, '#'));
				break;
			default:
				break;
			}
		}
	}
}