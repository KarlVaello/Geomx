#pragma once

#include <iostream>


struct mystruct {

	void print() {
	
	}

};


class Point
{
private:
	int m_x = 0;
	int m_y = 0;

public:

	Point(int x, int y);
	Point(const Point& cPoint);
	Point(Point&& mPoint) noexcept;
	virtual ~Point();

	// Overload + 
	Point operator+(const Point& b) const {

		return Point(this->m_x + b.m_x, this->m_y + b.m_y);
	}
	// Overload - 
	Point operator-(const Point& b) const {

		return Point(this->m_x - b.m_x, this->m_y - b.m_y);
	}
	// Overload =
	Point operator=(const Point& b) const {

		return Point(b);
	}



	inline void setX(int x) { this->m_x = x; }
	inline const int* getX() const { return &this->m_x; }

	inline void setY(int y) { this->m_y = y; }
	inline const int* getY() const { return &this->m_y; }

	virtual void print_info();
};

