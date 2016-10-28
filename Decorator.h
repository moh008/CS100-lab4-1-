#ifndef DECORATOR_H
#define DECORATOR_H

#include <iostream>
#include <cmath>
#include "Composite.h"

using namespace std;

class Decorator : public Base{
protected: 
	Base* decorator;

public: 
	Decorator(Base* dec): decorator(dec){};
	double evaluate()
	{
		return decorator->evaluate();
	}

};

class Ceil : public Base{
protected:
	Base* ceiL;

public:
	Ceil(Base* c) : ceiL(c){};
	double evaluate()
	{
		return ceil(ceiL->evaluate());
	}
};

class Floor : public Base{
protected:
	Base* flooR;
public: 
	Floor(Base* f) : flooR(f){};
	double evaluate()
	{
		return floor(flooR->evaluate());
	}
};

class Abs : public Base{
protected:
	Base* abS;
public:
	Abs(Base* a) : abS(a){};
	double evaluate()
	{
		return abs(abS->evaluate());
	}
};
#endif
