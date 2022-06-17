#include "geomx.h"

Geomx::Geomx(Point* _o) {
	this->o = _o;
}

Geomx::~Geomx() {

}

void Geomx::print_info() {

	std::cout << "Geomx[";
	this->o->print_info();
	std::cout << std::endl;
}

