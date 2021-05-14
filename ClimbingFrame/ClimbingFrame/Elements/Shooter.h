#pragma once
#include "Element.h"
class Shooter : public Element
{
public:
	Shooter(Coordinates coords);
	~Shooter() override{
		deletePosition();
	}
	void action() override;
};

