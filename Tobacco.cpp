#include "Tobacco.h"
#include "Visitor.h"

Tobacco::Tobacco(int a)
{
	price = a;
}


Tobacco::~Tobacco()
{
}

double ::Tobacco::getPrice()
{
	return price;
}

double::Tobacco::accept(Visitor& visitor)
{
	return	visitor.visit(*this);
}