#include "point.h"

Point::Point() {

}

Point::Point(int _x, int _y) {

	this->x = _x;
	this->y = _y;
}

Point::~Point() {

}

void Point::print_info() {

	std::cout << "(" << this->x << "," << this->y << ")";
}