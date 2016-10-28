#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H

#include <iostream>
#include "Sort.h"
class Container;

using namespace std;


class SelectionSort : public Sort{
public:
	SelectionSort(){};	
        void sort(Container* container);

};
#endif
