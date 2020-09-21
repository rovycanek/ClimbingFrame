#include "MapLoader.h"
#include "WindowController.h"
#include "Wall.h"

int MapLoader::ReturnXsize()
{
	int x = 0, y = 0, size = 0;
	while (WindowController::ReadFromPosition(x, y) == '#') {
		size++;
		x++;
	}
	return size;
}

int MapLoader::ReturnYsize()
{
	int x = 0, y = 0, size = 0;
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





void MapLoader::LoadMap(std::vector<Element>* elements){

	PrintMap();
	int sizeX = ReturnXsize();
	int sizeY = ReturnYsize();
	for (short int y = 0; y < sizeY; y++) {
		for (short int x = 0; x < sizeX; x++) {
			switch (WindowController::ReadFromPosition(x, y)) {
			case '#':
				elements->push_back(Wall(x,y,'#'));
				break;
			default:
				break;
			}
		}
	}

}