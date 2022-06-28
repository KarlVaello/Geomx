#pragma once
#include "geomx.h"
#include "point.h"

class GCircle : public Geomx
{
private:
	unsigned long m_r;

public:

	GCircle(Point* o, Rotation* rot, Geomx* parent, unsigned long r);
	virtual ~GCircle();

	inline void setR(unsigned long r) { this->m_r = r; }
	inline unsigned long getR() { return this->m_r; }


	void print_info();

};