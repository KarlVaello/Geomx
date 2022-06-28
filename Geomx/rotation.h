#pragma once
#include <iostream>


class Rotation
{

private:

	int m_x;
	int m_y;
	int m_z;

public:

	Rotation(int x, int y, int z);
	virtual ~Rotation();

	inline void setX(int x) { this->m_x = x; }
	inline const int* getX() const { return &this->m_x; }

	inline void setY(int y) { this->m_y = y; }
	inline const int* getY() const { return &this->m_y; }

	inline void setZ(int z) { this->m_z = z; }
	inline const int* getZ() const { return &this->m_z; }

	virtual void move3(int x, int y, int z) { this->m_x; this->m_y; this->m_z = z; }


	virtual void print_info();


};

