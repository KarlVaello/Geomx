#pragma once
#include "geomx.h"
#include "point.h"

class Circle : public Geomx
{
private:
	Point* o;
	unsigned long r;

public:

	Circle(Point* _o, unsigned long _r);
	~Circle();

	inline void setR(unsigned long _r) { this->r = _r; }
	inline unsigned long getR() { return this->r; }


	void print_info();

};