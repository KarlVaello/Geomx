#include "rectangle.h"

Rectangle::Rectangle(Point* o, Geomx* parent, unsigned long h, unsigned long w) : Geomx (o, parent) {
	this->m_h = h;
	this->m_w = w;
}

Rectangle::~Rectangle() {
	std::cout << "Rectangle delete" << std::endl;
	delete(this->getO());
}


void Rectangle::print_info() {

	std::cout << "Rectangle[";
	this->getO()->print_info();
	std::cout << "," << this->m_h << "," << this->m_w << "]" << std::endl;
}