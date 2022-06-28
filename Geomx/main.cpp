
#include <vector>
#include<windows.h>

#include "layer.h"
#include "point.h"
#include "point3.h"
#include "grectangle.h"
#include "gcircle.h"


int main()
{

	Layer* l0 = new Layer();

	Geomx* g0 =new GRectangle(new Point3(1,1,0), nullptr, 10, 10);
	l0->items.push_back(g0);
	l0->print_info();
	Sleep(2000);

	Geomx* g1 = new GRectangle(new Point(1, 1), nullptr, 10, 10);
	l0->items.push_back(g1);
	l0->print_info();
	Sleep(2000);

	Geomx* g2 = new GCircle(new Point(10, 8), nullptr, 10);
	l0->items.push_back(g2);
	l0->print_info();
	Sleep(2000);

	// create at root world geomx
	Geomx* g3 = new GCircle(new Point(1, 6), nullptr, 5);
	l0->items.push_back(g3);
	l0->print_info();
	Sleep(2000);


	g0->addChild(g1);
	l0->print_info();
	Sleep(2000);

	g0->addChild(g2);
	l0->print_info();
	Sleep(2000);

	g0->addChild(g3);
	l0->print_info();
	Sleep(2000);

	Geomx* g4 = new GRectangle(new Point(1, 1), nullptr, 10, 10);
	l0->items.push_back(g4);
	l0->print_info();
	Sleep(2000);

	//g0->getO()->move3(2, 4, 8);

	return 0;
}