#pragma once
#include "point.h"

class Rectangle
{
private:
	Point* o;
	unsigned long h;
	unsigned long w;

public:

	Rectangle(Point* _o, unsigned long _h, unsigned long _w);
	~Rectangle();

	inline void setH(unsigned long h) { this->h = h; }
	inline unsigned long getH() { return this->h; }

	inline void setW(unsigned long w) { this->w = w; }
	inline unsigned long getW() { return this->w; }

	void print_info();

};

