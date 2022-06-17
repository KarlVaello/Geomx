
#include <vector>

#include "point.h"
#include "point3.h"
#include "rectangle.h"
#include "circle.h"


int main()
{
	Point* p0 = new Point(10, 20);
	Point* p1 = new Point3(10, 20, 45);

	std::vector<Point*> points;

	points.push_back(p0);
	points.push_back(p1);

	for (auto &s : points) {
		
		s->print_info();
		std::cout << std::endl;

	}

	Rectangle* r0 = new Rectangle(p0, 10, 10);
	r0->print_info();

	Rectangle* r1 = new Rectangle(p1, 10, 10);
	r1->print_info();

	Circle* c0 = new Circle(p0, 10);
	c0->print_info();

	Circle* c1 = new Circle(p1, 4);
	c1->print_info();

	return 0;
}