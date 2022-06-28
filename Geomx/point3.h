#pragma once
#include "point.h"
#include <iostream>


class Point3 : public Point
{
private:

	int m_z;

public:

	Point3(int x, int y, int z);
	virtual ~Point3();

	inline void setZ(int z) { this->m_z = z; }
	inline const int* getZ() const { return &this->m_z; }

	virtual void move3(int x, int y, int z) {this->setX(x); this->setY(y); this->m_z = z; }


	virtual void print_info();


};

