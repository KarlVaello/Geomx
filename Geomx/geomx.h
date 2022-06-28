#pragma once
#include <vector>
#include "point3.h"
#include "rotation.h"

class Geomx
{

private:

	Point3* m_o;
	Rotation* m_r;
	Geomx* m_parent;
	std::vector<Geomx*> m_childrens;

public:

	Geomx(Point3* o, Geomx* parent);
	Geomx(const Geomx& cGeomx);
	Geomx(Geomx&& mGeomx) noexcept;
	virtual ~Geomx();

	inline void setO(Point3* o) { this->m_o = o; }
	inline Point3* getO() { return this->m_o; }

	inline Geomx* getParent() { return this->m_parent; }
	inline void setParent(Geomx* parent) { this->m_parent = parent; }

	void addChild(Geomx* child);
	std::vector<Geomx*> getChildrens();

	Point3* getLocalPosition();
	Point3* getWorldPosition();


	virtual void print_info();


};

