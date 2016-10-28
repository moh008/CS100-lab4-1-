#ifndef CONTAINER_H
#define CONTAINER_H

#include <iostream>
#include "Composite.h"


#include "Sort.h"
class Sort;
using namespace std;

// Antonio Martinez and Minwhan Oh

class Container {
	protected:
		Sort* sort_function;

	public:
	/*Constructors*/
	Container() : sort_function(NULL){};
	Container(Sort* function): sort_function(function){};

	/*Non virtual Functions */
	void set_sort_function(Sort* sort_function);
	 // set the type of sorting algorith
	/*Pure virtual functions*/
	//push the top pointer of the tree into container
	virtual void add_element(Base* element) = 0;
	//iterate through trees and output values
	virtual void print() = 0;
	// calls on the previously set sorting-algorithm. Checks if sort_function is not null, throw exception if otherwise
	virtual void sort() = 0;
	/*Esentially the only function needed to sort */
	// switch tree locations
	virtual void swap(int i, int j) = 0;
	//get top ptr of tree at index i
	virtual Base* at(int i) = 0;
	// return container size
	virtual int size() = 0;
};
/*
class VectorContainer : public Container {
protected:
	vector<Base*> myvector;
	int s;

public:
	void add_element(Base* element)
	{
		myvector.push_back(element);
		s++;
	}
	void print()
	{
		for(int l = 0; l < s; l++)
		{
			cout << myvector.at(l)->evaluate() << endl;
		}
	}
	void sort()
	{
		//this->sort_function->sort();
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
	void swap(int i, int j)
	{
		if(i != j){
		Base* temp = myvector.at(i);
		myvector.at(i) = myvector.at(j);
		myvector.at(j) = temp;
		}
	}
	Base* at(int i)
	{
		if(i < s)
		{
			for(int k = 0; k < s; i++)
			{
				if(k == i)
				{
					return myvector[i];
				}
			}
		}
	}
	int size()
	{
		return s;
	}
	


};

class ListContainer : public Container {
protected:
	list<Base*> mylist;
	int s;
public:
	void add_element(Base* element)
	{
		mylist.push_back(element);
		s++;
	}
        void print()
	{
		list<Base*>::iterator it = mylist.begin();
		for(it; it != mylist.end(); it++)
		{
			cout << *it->evaluate();
		}
	}
	
        void sort()
	{
		try
		{
			if(!sort_function){
			throw invalid_argument("Still set to NULL value");
			sort_function->sort(this);
			}
		}
		catch(exception& e)
		{
			cout << e.what() << endl;
		}
	}

		
        void swap(int i, int j)
	{
		if(i != j){
		Base* temp = mylist.at(i);
		mylist.at(i) = mylist.at(j);
		mylist.at(j) = temp;}
	}

        Base* at(int i)
	{
		if(i < s)
		{
			list<Base*>::iterator it = mylist.begin();  
			advance(it,i - 1);
			return *it;
		}

	}
		
        int size()
	{
		return s;
	}

};
*/
#endif
	
