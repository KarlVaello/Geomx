#pragma once

#include <iostream>

class Point
{
private:
	int m_x = 0;
	int m_y = 0;

public:

	Point();
	Point(int x, int y);
	Point(const Point& cPoint);
	Point(Point&& mPoint) noexcept;
	virtual ~Point();

	inline void setX(int x) { this->m_x = x; }
	inline const int* getX() const { return &this->m_x; }

	inline void setY(int y) { this->m_y = y; }
	inline const int* getY() const { return &this->m_y; }

	virtual void print_info();
};

