#pragma once
struct Coordinates{
public:
	int x;
	int y;
	enum DIRECTION { UP = '^', DOWN = 'v', RIGHT = '>', LEFT = '<' };
	bool operator == (const Coordinates& other) const
	{
		return x == other.x && y == other.y;
	}
	Coordinates operator + (const Coordinates& other) const
	{
		return Coordinates{ x + other.x , y + other.y };
	}
	Coordinates operator + (const char& other) const
	{
		switch (other)
		{
			case DIRECTION::DOWN:
				return Coordinates{ x , y + 1 };
				break;
			case DIRECTION::UP:
				return Coordinates{ x , y - 1};
				break;
			case DIRECTION::LEFT:
				return Coordinates{ x - 1 , y };
				break;
			case DIRECTION::RIGHT:
				return Coordinates{ x + 1 , y };
				break;
			default:
				return Coordinates{ x , y };
				break;
		}
	}
};

