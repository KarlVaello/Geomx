
#include <vector>

#include "point.h"
#include "point3.h"
#include "rectangle.h"
#include "circle.h"

void mod_function(int& a)
{
	a = 19;
}


void mod_function_array(int* a)
{
	a[0] = 2;
	a[1] = 4;
	a[2] = 6;

}



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

	std::cout << "--";
	g0->print_info();
	std::cout << "\t";
	g1->print_info();
	std::cout << "\t";
	g2->print_info();
	std::cout << "\t";
	g3->print_info();

	delete(g0);
	delete(g1);

	Point* pr1 = new Point(2,3);
	Point* pr2 = new Point(3,2);

	Point pr3 = *pr1 + *pr2;

	Point* pr4 = new Point(8, 13);
	Point* pr5 = pr4;

	pr3.print_info();

	std::cout << std::endl;
	pr5->print_info();
	std::cout << std::endl;

	int a = 6954;

	int* b = &a;

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << *b << std::endl;

	mod_function(a);
	std::cout << "a: " << a << std::endl;

	mod_function(*b);
	std::cout << "b: " << *b << std::endl;

	int arrat[3] = { 0, 0, 0 };

	mod_function_array(arrat);

	for (size_t i = 0; i < 3; i++)
	{
		std::cout << "arrat[" << i << "]: " << arrat[i] << std::endl;

	}

	return 0;
}