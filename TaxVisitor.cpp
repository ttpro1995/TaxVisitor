#include "TaxVisitor.h"
//Group 9 - APCS 13ctt - a example of visitor 



double ::TaxVisitor::visit(Necessity& good) //10%
{
	int price = good.getPrice();
	int tax = price / 10;
	return tax + price;
}

double ::TaxVisitor::visit(Tobacco& good)//20%
{
	int price = good.getPrice();
	int tax = price * 20 / 100;
	return tax + price;
}
double ::TaxVisitor::visit(Liquor& good)//30%
{
	int price = good.getPrice();
	int tax = price * 30 / 100;
	return tax + price;
}