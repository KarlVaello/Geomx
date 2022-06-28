#include "point.h"

Point::Point(int x, int y, int z) : m_x(x), m_y(y), m_z(z) {
	//std::cout << "Point3 created" << std::endl;

}

Point::~Point() {
	//std::cout << "Point deleted" << std::endl;
}

void Point::print_info() {

	std::cout << "(" << *this->getX() << "," << *this->getY() << "," << this->m_z << ")";
}