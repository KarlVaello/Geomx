#include "circle.h"


Circle::Circle(Point* o, Geomx* parent, unsigned long r) 
	: m_r(r), Geomx(o, parent) {
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
