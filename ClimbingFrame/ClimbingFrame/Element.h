#pragma once
class Element
{
private:
	bool print = true;
protected:
	//this variable is used for character that is printed to console
	char visual;

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
	class Coordinates {
	public:
		int x;
		int y;
	};
	Coordinates coordinates;
};

