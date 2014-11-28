#include "Necessity.h"
#include "Visitor.h"

Necessity::Necessity(int a)
{
	price = a;
}


Necessity::~Necessity()
{
}

double::Necessity::accept(Visitor& visitor)
{
return	visitor.visit(*this);
}

double ::Necessity::getPrice()
{
	return price;
}
