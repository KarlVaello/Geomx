#include "point.h"

Point::Point(int x, int y) : m_x(x), m_y(y) {
	std::cout << "Point created" << std::endl;
}

Point::Point(const Point& cPoint) {
	std::cout << "Point copied" << std::endl;
	this->m_x = cPoint.m_x;
	this->m_y = cPoint.m_y;
}

Point::Point(Point&& mPoint) noexcept {
	std::cout << "Point moved" << std::endl;

	this->m_x = mPoint.m_x;
	this->m_y = mPoint.m_y;
	delete(&mPoint);
}


Point::~Point() {
	std::cout << "Point deleted" << std::endl;
}



void Point::print_info() {
	std::cout << "(" << this->m_x << "," << this->m_y << ")";
}