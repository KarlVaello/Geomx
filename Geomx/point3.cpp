#include "point3.h"

Point3::Point3(int x, int y, int z) : m_x(x), m_y(y), m_z(z) {
	//std::cout << "Point3 created" << std::endl;

}

Point3::~Point3() {
	//std::cout << "Point deleted" << std::endl;
}

void Point3::print_info() {

	std::cout << "(" << *this->getX() << "," << *this->getY() << "," << this->m_z << ")";
}