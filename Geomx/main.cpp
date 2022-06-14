
#include <vector>

#include "point.h"
#include "point3.h"
#include "rectangle.h"


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

	Rectangle* r0 = new Rectangle(Point(0, 0), 10, 10);
	r0->print_info();

	Rectangle* r1 = new Rectangle(Point3(3, 0, 4), 10, 10);
	r1->print_info();

	return 0;
}