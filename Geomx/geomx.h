#pragma once
#include <vector>
#include "point.h"
#include "rotation.h"

class Geomx
{

private:

	Point* m_o;
	Rotation* m_r;
	Geomx* m_parent;
	std::vector<Geomx*> m_childrens;

public:

	Geomx(Point* o, Geomx* parent);
	Geomx(const Geomx& cGeomx);
	Geomx(Geomx&& mGeomx) noexcept;
	virtual ~Geomx();

	inline void setO(Point* o) { this->m_o = o; }
	inline Point* getO() { return this->m_o; }

	inline Geomx* getParent() { return this->m_parent; }
	inline void setParent(Geomx* parent) { this->m_parent = parent; }

	void addChild(Geomx* child);
	std::vector<Geomx*> getChildrens();

	Point* getLocalPosition();
	Point* getWorldPosition();


	virtual void print_info();


};

