#pragma once
#include "point.h"
#include <iostream>


class Point3 : public Point
{
private:
	int x;
	int y;
	int z;

public:

	Point3(int x, int y, int z);
	~Point3();

	inline void setX(int x) { this->x = x; }
	inline int getX() { return this->x; }

	inline void setY(int y) { this->y = y; }
	inline int getY() { return this->y; }

	inline void setZ(int z) { this->z = z; }
	inline int getZ() { return this->z; }

	virtual void print_info();


};

