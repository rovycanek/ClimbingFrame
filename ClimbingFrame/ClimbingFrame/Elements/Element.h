#pragma once
#include "./../Types/Coordinates.h"
class Element
{
private:
	bool print = true;
protected:
	//this variable is used for character that is printed to console
	char visual = 'L';

	//this variable is used to determine direction of element
	char direction = UP;

	//this function removes element from its position
	void deletePosition();	

	//this function prints element to its position
	void printElement();

	//this function moves element to one space to the left
	void moveLeft();

	//this function moves element to one space to the right
	void moveRight();

	//this function moves element to one space up
	void moveUp();

	//this function moves element to one space down
	void moveDown();
public:
	virtual ~Element() {
	}
	Coordinates coordinates{ 0,0 };
	enum DIRECTION { UP = '^', DOWN = 'v', RIGHT = '>', LEFT = '<'};
	void virtual action() {};
	bool operator == (const Element& other) const
	{
		return coordinates == other.coordinates;
	}
	bool operator != (const Element& other) const
	{ 
		return !operator==(other);
	}
};

