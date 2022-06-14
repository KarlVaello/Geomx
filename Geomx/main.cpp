#include "point.h"
#include "point3.h"

#include <vector>

int main()
{
	Point* p0 = new Point(10, 20);
	Point* p1 = new Point3(10, 20, 45);

	std::vector<Point*> points;

	points.push_back(p0);
	points.push_back(p1);


	for (auto &s : points) {
		
		s->print_pointInfo();

	}

	return 0;
}