#include <iostream>
#include <string>
#include <stdexcept>
#include "VectorContainer.h"
#include "Composite.h"
#include "Container.h"

using namespace std;

void VectorContainer::add_element(Base* element)
{
	myvector.push_back(element);
	s++;
}

void VectorContainer::print()
{
	for(int l = 0; l < s; l++)
	{
		cout << myvector.at(l)->evaluate() << endl;
	}
}

void VectorContainer::sort()
{
	//this->sort_function->sort();
	try
	{
		if(!sort_function){
		throw invalid_argument("Still set to a NULL");
		sort_function->sort(this);
		}
	}
	catch(exception& e)
	{
		cout << e.what() << endl;
	}
}

void VectorContainer::swap(int i, int j)
{
	Base* temp = myvector.at(i);
	myvector.at(i) = myvector.at(j);
	myvector.at(j) = temp;

}

Base* VectorContainer::at(int i)
{
	return myvector[i];

}

int VectorContainer::size()
{
	return s;
}





