#pragma once
#include "Visitable.h"
class Tobacco:public Visitable
{
private:
	double price;
public:
	Tobacco(int a);
	~Tobacco();
	double getPrice();
	double accept(Visitor&);
};

