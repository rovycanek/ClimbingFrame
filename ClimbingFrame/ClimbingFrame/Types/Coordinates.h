#pragma once
struct Coordinates{
public:
	int x;
	int y;
	bool operator == (const Coordinates& other) const
	{
		return x == other.x && y == other.y;
	}
	Coordinates operator + (const Coordinates& other) const
	{
		return Coordinates{ x + other.x , y + other.y };
	}
};

