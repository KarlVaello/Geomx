#include "circle.h"


Circle::Circle(Point* _o, unsigned long _r) : Geomx(_o) {
	this->o = _o;
	this->r = _r;
}

Circle::~Circle() {

}

void Circle::print_info() {

	std::cout << "Circle[";
	this->o->print_info();
	std::cout << "," << this->r << "]" << std::endl;
}
