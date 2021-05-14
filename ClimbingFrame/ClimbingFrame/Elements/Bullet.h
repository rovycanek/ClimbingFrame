#pragma once
#include "Element.h"
class Bullet :
    public Element
{
private:
public:
	Bullet(Coordinates coords, char dir){
		direction = dir;
		coordinates = coords + dir;
		visual = '*';
	}
	~Bullet() override{
		deletePosition();
	}
	
	void action() override;
};

