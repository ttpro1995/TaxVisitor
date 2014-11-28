#pragma once
#include "Visitor.h"
class TaxHolidayVisitor :
	public Visitor
{
public:
	TaxHolidayVisitor();
	~TaxHolidayVisitor();

	double visit(Necessity&); //5 %
	double visit(Tobacco&);//10%
	double visit(Liquor&);//15%
};

