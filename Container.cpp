#include <iostream>
#include "Container.h"
//#include "Sort.h"
class Sort;

using namespace std;

void Container::set_sort_function(Sort* sort_function)
{
	this->sort_function = sort_function;
}
