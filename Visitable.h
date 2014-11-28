#pragma once

class Visitor;//prototype



class Visitable
{
public:
	Visitable();
	 virtual double accept(Visitor&)=0;
	~Visitable();
};

