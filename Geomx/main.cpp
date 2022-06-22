
#include <vector>

#include "point.h"
#include "point3.h"
#include "rectangle.h"
#include "circle.h"


int main()
{

	Geomx* g0 =new Rectangle(new Point3(1,1,0), nullptr, 10, 10);
	g0->print_info();

	Geomx* g1 = new Rectangle(new Point(1, 1), nullptr, 10, 10);
	g1->print_info();

	Geomx* g2 = new Circle(new Point(10, 8), nullptr, 10);
	g2->print_info();

	// create at root world geomx
	Geomx* g3 = new Circle(new Point(1, 6), nullptr, 5);
	g3->print_info();

	g0->addChild(g1);
	g0->addChild(g2);
	g0->addChild(g3);

	std::cout << "--" << std::endl;
	g0->print_info();
	std::cout << "\t";
	g1->print_info();
	std::cout << "\t";
	g2->print_info();
	std::cout << "\t";
	g3->print_info();

	delete(g0);
	delete(g1);


	return 0;
}