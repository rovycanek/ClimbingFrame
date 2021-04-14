#include "Wall.h"

Wall::Wall(int x, int y, char visual)
{
    coordinates.x = x;
    coordinates.y = y;
    Element::visual = visual;
}

Wall::~Wall()
{
    deletePosition();
};

void Wall::action()
{
    printElement();
};
