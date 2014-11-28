#pragma once
#include "Visitor.h"
class TaxVisitor :
	public Visitor
{
public:
	TaxVisitor();
	~TaxVisitor();
	double visit(Necessity&); //10 %
	double visit(Tobacco&);//20%
	double visit(Liquor&);//30%


};

