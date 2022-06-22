#include "circle.h"


Circle::Circle(Point* o, Geomx* parent, unsigned long r) : Geomx(o, parent) {
	this->m_r = r;
}

Circle::~Circle() {
	std::cout << "Circle delete" << std::endl;
	delete(this->getO());
}

void Circle::print_info() {

	std::cout << "Circle[";
	this->getO()->print_info();
	std::cout << "," << this->m_r << "]" << std::endl;
}
