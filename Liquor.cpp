#include "Liquor.h"
#include "Visitor.h"

Liquor::Liquor(int a)
{
	price = a;
}


Liquor::~Liquor()
{
}

double Liquor::getPrice()
{
	return price;
}

double::Liquor::accept(Visitor& visitor)
{
	return	visitor.visit(*this);
}
