#pragma once
#include "Visitable.h"
class Necessity:public Visitable
{
private:
	double price;
public:
	double accept(Visitor&);
	Necessity(int);
	double getPrice();
	~Necessity();
};

