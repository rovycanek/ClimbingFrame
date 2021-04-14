#pragma once
#include "Element.h"
class Bullet :
    public Element
{
private:
public:
	Bullet(Coordinates coords, char dir){
		direction = dir;
		coordinates = coords;
		visual = '*';
	}
	~Bullet() {
		deletePosition();
	}
	
	void action() override;
};

