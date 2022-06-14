#pragma once

#include <iostream>

class Point
{
private:
	int x = 0;
	int y = 0;

public:

	Point();
	Point(int x, int y);
	~Point();

	inline void setX(int x) { this->x = x; }
	inline int getX() { return this->x; }

	inline void setY(int y) { this->y = y; }
	inline int getY() { return this->y; }

	virtual void print_info();
};

