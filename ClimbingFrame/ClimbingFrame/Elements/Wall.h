#pragma once
#include "Element.h"

class Wall :
    public Element
{
public:
    Wall(int x, int y, char visual);
    ~Wall() override;
    void action() override;
};