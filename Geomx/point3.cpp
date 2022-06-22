#include "point3.h"

Point3::Point3(int x, int y, int z) : m_z(z), Point (x, y) {
	std::cout << "Point3 created" << std::endl;

}

Point3::~Point3() {
	std::cout << "Point deleted" << std::endl;
}

void Point3::print_info() {

	std::cout << "(" << *this->getX() << "," << *this->getY() << "," << this->m_z << ")";
}