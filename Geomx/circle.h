#pragma once
#include "geomx.h"
#include "point.h"

class Circle : public Geomx
{
private:
	unsigned long m_r;

public:

	Circle(Point* o, Geomx* parent, unsigned long r);
	virtual ~Circle();

	inline void setR(unsigned long r) { this->m_r = r; }
	inline unsigned long getR() { return this->m_r; }


	void print_info();

};