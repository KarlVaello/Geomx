#pragma once
#include <stdio.h>
#include <vector>
#include "geomx.h"


class Layer
{

public:

	Layer() {}
	~Layer() {}

	std::vector<Geomx*> items;

	void print_info() {
		system("cls");
		std::cout << "--layer tree--" << std::endl;
		if (items.size() != 0) {
			for (auto& s : items) {
				if(s->getParent() == nullptr) {
					s->print_info();
				}
			}
		}
	}


private:

};

