#pragma once
#include "geomx.h"
#include "point.h"

class Rectangle : public Geomx
{
private:
	unsigned long m_h;
	unsigned long m_w;

public:

	Rectangle(Point* o, Geomx* parent, unsigned long h, unsigned long w);
	virtual ~Rectangle();

	inline void setH(unsigned long h) { this->m_h = h; }
	inline unsigned long getH() { return this->m_h; }

	inline void setW(unsigned long w) { this->m_w = w; }
	inline unsigned long getW() { return this->m_w; }

	void print_info();

};

