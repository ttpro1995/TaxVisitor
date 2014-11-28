#include "TaxHolidayVisitor.h"


TaxHolidayVisitor::TaxHolidayVisitor()
{
}


TaxHolidayVisitor::~TaxHolidayVisitor()
{
}

double ::TaxHolidayVisitor::visit(Necessity& good)//5%
{
	int price = good.getPrice();
	int tax = price*5 / 100;
	return tax + price;
}

double ::TaxHolidayVisitor::visit(Tobacco& good)//10%
{
	int price = good.getPrice();
	int tax = price * 15 / 100;
	return tax + price;
}
double ::TaxHolidayVisitor::visit(Liquor& good)//15%
{
	int price = good.getPrice();
	int tax = price * 20 / 100;
	return tax + price;
}