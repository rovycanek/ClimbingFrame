#pragma once
#include "Element.h"
class Wall :
    public Element
{
public:
    Wall(int x, int y, char visual) {
        coordinates.x = x;
        coordinates.y = y;
        Element::visual = visual;
    }
};