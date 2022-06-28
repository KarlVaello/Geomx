#include "geomx.h"

Geomx::Geomx(Point3* o, Geomx* parent) : m_o(o), m_parent(parent) {
}

Geomx::Geomx(const Geomx& cGeomx) : m_o(cGeomx.m_o), m_parent(cGeomx.m_parent) {
	//std::cout << "Geomx copy" << std::endl;

}

Geomx::Geomx(Geomx&& mGeomx) noexcept{
	//std::cout << "Geomx move" << std::endl;

}

Geomx::~Geomx() {
	//std::cout << "Geomx delete" << std::endl;
}

void Geomx::print_info() {

	std::cout << "Geomx[";
	this->m_o->print_info();
	std::cout << std::endl;
	
	if (m_childrens.size() != 0) {
		for (auto& s : m_childrens) {
			std::cout << "--";
			s->print_info();
		}
	}
}

void Geomx::addChild(Geomx* child) {
	this->m_childrens.push_back(child);
	child->setParent(this);

	child->m_o->setX(*child->m_o->getX() - *this->m_o->getX());
	child->m_o->setY(*child->m_o->getY() - *this->m_o->getY());
}

std::vector<Geomx*> Geomx::getChildrens() {

	return this->m_childrens;
}

Point3* Geomx::getLocalPosition() {

	return this->m_o;
}

Point3* Geomx::getWorldPosition() {

	return new Point3(2,2,0);
}
