#ifndef COMPOSITE_H
#define COMPOSITE_H

#include <iostream>
/*Antonio Martinez and Minwhan Oh*/
using namespace std;

class Base{
public:
	/* Constructors */
	Base() {};
	/* Pure Virtual Functions */
	virtual double evaluate() = 0;
};


class Op : public Base{
protected:
	double var;
public:
	Op(double v): var(v) {};
	double evaluate()
	{
	return this->var;
	} 
};
/*
class DOp : public Base{
protected:
	//Base* left;
	//Base* right;
	double data;
	double data2;
public:

	DOp(double d,double d2): data(d), data2(d2){};
	virtual double evaluate() = 0;
};*/

class Add: public Base{
protected:
	Base* left;
	Base* right;
public:

	Add(Base* l,Base* r): left(l), right(r) {};
	double evaluate()
	{	
		return this->left->evaluate() + this->right->evaluate();
	}
		
};

class Div : public Base{
protected:
        Base* left;
        Base* right;

public:
	Div(Base* l, Base* r): left(l), right(r){};
	double evaluate()
	{
		return this->left->evaluate() /  this->right->evaluate();
	}
};


class Mult : public Base{
protected:
	Base* left;
	Base* right;	
public:

	Mult(Base* l,Base* r): left(l), right(r){};
	double evaluate()
	{ 
		return this->left->evaluate() * this->right->evaluate();	
	}
};


class Sub : public Base{
protected:
        Base* left;
        Base* right;

public: 
	Sub(Base* l, Base* r): left(l), right(r){};
	double evaluate()
	{
		return this->left->evaluate() - this->right->evaluate();
	}
};


class Sqr : public Base{       
protected:
	Base* var;
public:
	Sqr(Base* v): var(v) {};
	double evaluate()
	{
		return this->var->evaluate() * this->var->evaluate();
	}	
};

#endif
