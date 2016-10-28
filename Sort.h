#ifndef SORT_H
#define SORT_H

#include <iostream>
#include "Container.h" 
class Container;
using namespace std;

// Antonio Martinez and Minwhan Oh


class Sort {
public:
	/* Conctructors*/
	Sort(){return;};

	/*Pure Virtual Functions */
	virtual void sort(Container* container) = 0;
};

#endif
