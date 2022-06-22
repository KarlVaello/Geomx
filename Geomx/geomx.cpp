#include "geomx.h"

Geomx::Geomx(Point* o, Geomx* parent) {
	this->m_o = o;
	this->m_parent = parent;
}

Geomx::~Geomx() {
	std::cout << "Geomx delete" << std::endl;
}

void Geomx::print_info() {

	std::cout << "Geomx[";
	this->m_o->print_info();
	std::cout << std::endl;
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

Point* Geomx::getLocalPosition() {

}

Point* Geomx::getWorldPosition() {


}
