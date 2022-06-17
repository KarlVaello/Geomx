#pragma once

#include "point.h"

class Geomx
{

private:

	Point* o;

public:

	Geomx(Point* _o);
	~Geomx();

	inline void setO(Point* _o) { this->o = _o; }
	inline Point* getO() { return this->o; }

	virtual void print_info();

};

