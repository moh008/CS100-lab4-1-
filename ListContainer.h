#ifndef LISTCONTAINER_H
#define LISTCONTAINER_H

#include <iostream>
#include <list>
#include <stdexcept>
#include <iterator>
#include "Container.h"
#include "Composite.h"

class Sort;
using namespace std;

class ListContainer : public Container{
protected:
	list<Base*> mylist;
	int s;

public:
	void add_element(Base* element);
	void print();
	void sort();
	Base* at(int i);
	void swap(int i, int j);
	int size();

};

#endif
