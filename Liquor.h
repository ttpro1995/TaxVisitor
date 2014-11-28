
#pragma once
#include "Visitable.h"
class Liquor :
	public Visitable
{
private:
	double price;
public:
	 double accept(Visitor&);
	Liquor(int a);
	~Liquor();
	double getPrice();
};

