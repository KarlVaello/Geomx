#include "grectangle.h"

GRectangle::GRectangle(Point* o, Rotation* rot, Geomx* parent, unsigned long h, unsigned long w)
	: m_h(h), m_w(w), Geomx (o, rot, parent) {
}

GRectangle::~GRectangle() {
	//std::cout << "Rectangle delete" << std::endl;
}

void GRectangle::deleteAsComposed()
{
	//std::cout << "Rectangle delete as Composed" << std::endl;
	delete(this->getO());

}

void GRectangle::print_info() {

	std::cout << "Rectangle[";
	this->getO()->print_info();
	std::cout << "," << this->m_h << "," << this->m_w << "]" ;
	
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