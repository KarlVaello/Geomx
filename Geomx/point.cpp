#include "point.h"


Point::Point(int _x, int _y) {

	this->x = _x;
	this->y = _y;
}

Point::~Point() {

}

void Point::print_pointInfo() {

	std::cout << "[" << this->x << "," << this->y << "]" << std::endl;
}