#include <iostream>
#include <stdexcept>
#include <list>
#include <iterator>
#include "Composite.h"
#include "Container.h"
#include "ListContainer.h"

using namespace std;

void ListContainer::add_element(Base* element)
{
	mylist.push_back(element);
	s++;
}

void ListContainer::print()
{
	list<Base*>::iterator it = mylist.begin();
	for(; it!= mylist.end(); it++)
	{
		cout << (*it)->evaluate() << endl;
	}
}

void ListContainer::sort()
{
	try
	{
		if(!sort_function){
		throw invalid_argument("Still set to a NULL value");}
		sort_function->sort(this);
	}
	catch(exception& e)
	{
		cout << e.what() << endl;
	}
}
Base* ListContainer::at(int i)
{

	list<Base*>::iterator it = mylist.begin();
	advance(it,i);
	return *it;
}
void ListContainer::swap(int i, int j)
{
	//cout << "swap" << endl;	
	list<Base*>::iterator it = mylist.begin();
	list<Base*>::iterator it2 = mylist.begin();
	
	Base* temp = this->at(i);
	advance(it,i);
	advance(it2,j);
	*it = *it2;
	*it2 = temp;
	
}
/*
Base* ListContainer::at(int i)
{
	if(i > s)
	{
		list<Base*>::iterator it = mylist.begin();
		advance(it,i - 1);
		return *it;
	}
}
*/
int ListContainer::size()
{
	return s;
}

