#pragma once
#include "Necessity.h"
#include "Tobacco.h"
#include "Liquor.h"
class Visitor
{
public:
	Visitor();
	virtual double visit(Necessity&)=0;
	virtual double visit(Tobacco&) = 0;
	virtual double visit(Liquor&) = 0;
	~Visitor();
};

