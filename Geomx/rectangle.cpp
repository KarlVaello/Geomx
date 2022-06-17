#include "rectangle.h"

Rectangle::Rectangle(Point* _o, unsigned long _h, unsigned long _w) : Geomx (_o) {
	this->o = _o;
	this->h = _h;
	this->w = _w;
}

Rectangle::~Rectangle() {

}


void Rectangle::print_info() {

	std::cout << "Rectangle[";
	this->o->print_info();
	std::cout << "," << this->h << "," << this->w << "]" << std::endl;
}