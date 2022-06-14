#include "point3.h"

Point3::Point3(int _x, int _y, int _z) : Point (_x, _y) {

	this->x = _x;
	this->y = _y;
	this->z = _z;
}

Point3::~Point3() {

}

void Point3::print_info() {

	std::cout << "(" << this->x << "," << this->y << "," << this->z << ")";
}