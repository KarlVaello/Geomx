#pragma once
#include "geomx.h"
#include "point3.h"

class GRectangle : public Geomx
{
private:
	unsigned long m_h;
	unsigned long m_w;

public:

	GRectangle(Point3* o, Geomx* parent, unsigned long h, unsigned long w);
	virtual ~GRectangle();

	void deleteAsComposed();

	inline void setH(unsigned long h) { this->m_h = h; }
	inline unsigned long getH() { return this->m_h; }

	inline void setW(unsigned long w) { this->m_w = w; }
	inline unsigned long getW() { return this->m_w; }

	void print_info();

};

