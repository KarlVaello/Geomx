#pragma once
#include <vector>
#include "point.h"

class Geomx
{

private:

	Point* m_o;
	
	Geomx* m_parent;

	std::vector<Geomx*> m_childrens;

public:

	Geomx(Point* o, Geomx* parent);
	virtual ~Geomx();

	inline void setO(Point* o) { this->m_o = o; }
	inline Point* getO() { return this->m_o; }

	inline Geomx* getParent() { return this->m_parent; }
	inline void setParent(Geomx* _parent) { this->m_parent = m_parent; }

	void addChild(Geomx* child);
	std::vector<Geomx*> getChildrens();

	Point* getLocalPosition();
	Point* getWorldPosition();


	virtual void print_info();


};

