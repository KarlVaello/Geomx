#include "gcircle.h"


GCircle::GCircle(Point3* o, Geomx* parent, unsigned long r)
	: m_r(r), Geomx(o, parent) {
}

GCircle::~GCircle() {
	//std::cout << "Circle delete" << std::endl;
	delete(this->getO());
}

void GCircle::print_info() {

	std::cout << "Circle[";
	this->getO()->print_info();
	std::cout << "," << this->m_r << "]";

	if (this->getParent() != nullptr) {
		std::cout << "(Parent: " << this->getParent() << ")" << std::endl;
	}
	else
	{
		std::cout << "(Parent: unparent)" << std::endl;
	}


	if (getChildrens().size() != 0) {

		for (auto& s : getChildrens()) {
			std::cout << "  --";
			s->print_info();
		}
	}

}
