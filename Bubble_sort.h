#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H

#include <iostream>
#include "Sort.h"
class Container;

using namespace std;


class BubbleSort : public Sort {
public:
	BubbleSort();
        void sort(Container* container);
};
#endif

