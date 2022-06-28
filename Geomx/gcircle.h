#pragma once
#include "geomx.h"
#include "point3.h"

class GCircle : public Geomx
{
private:
	unsigned long m_r;

public:

	GCircle(Point3* o, Geomx* parent, unsigned long r);
	virtual ~GCircle();

	inline void setR(unsigned long r) { this->m_r = r; }
	inline unsigned long getR() { return this->m_r; }


	void print_info();

};