#ifndef VECTORCONTAINER_H
#define VECTORCONTAINER_H

#include <iostream>
#include <vector>
#include "Container.h"
#include "Composite.h"
#include <stdexcept>

class Sort;
using namespace std;

class VectorContainer : public Container
{
protected:
	vector<Base*> myvector;
	int s;

public:
	
	void add_element(Base* element);
	void print();
	void sort();
	void swap(int i, int j);
	Base* at(int i);
	int size();
};

#endif
