#include <iostream>
#include "Selection_sort.h"
#include "Sort.h"

class Container;

using namespace std;

void SelectionSort::sort(Container* container)
{
	//cout << "Selection Sort" << endl;
	int i, j, first;	
	int numLength = container->size();
	for(i = numLength - 1; i >= 0; i--)
	{
		first = 0;
		for(j = 1; j <= i; j++)
		{
			if(container->at(j)->evaluate() < container->at(first)->evaluate()){
			first = j;
			}
		}
		container->swap(first,i);
	}
	return;
}

