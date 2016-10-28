#include <iostream>
#include "Bubble_sort.h"
#include "Sort.h"
class Container;

using namespace std;

BubbleSort::BubbleSort(){}

void BubbleSort::sort(Container* container){
	int i, j;// flag = 1;
	int numLength = container->size();

	for(i = 0; i <= numLength; i++)
	{
		//cout << "bubble" << endl;
		//flag = 0;
		for(j = 0; j < (numLength - 1); j++)
		{
			if(container->at(j+1)->evaluate() <  container->at(j)->evaluate())
			{
				//cout << "Swap" << endl;
				container->swap(j,(j+1));
				//flag = 1;
			}
		}
		return;
	}
};

