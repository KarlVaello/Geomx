
#include <vector>

#include "point.h"
#include "point3.h"
#include "rectangle.h"
#include "circle.h"


int main()
{

	Geomx* g0 =new Rectangle(new Point3(10,20,0), 10, 10);
	g0->print_info();

	Geomx* g1 = new Rectangle(new Point(10, 20), 10, 10);
	g1->print_info();

	Geomx* g2 = new Circle(new Point(10, 8), 10);
	g2->print_info();

	Geomx* g3 = new Circle(new Point3(1, 6, 0), 5);
	g3->print_info();

	return 0;
}