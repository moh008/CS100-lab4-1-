#include <iostream>
#include "Composite.h"
#include "Container.h"
#include "Sort.h"
#include "Selection_sort.h"
#include "Bubble_sort.h"
#include "VectorContainer.h"
#include "ListContainer.h"
#include "Decorator.h"
using namespace std;

// Antonio Martinez and Minwhan Oh

int main(){
	Op* op7 = new Op(-7);
        Op* op4 = new Op(4);
        Op* op3 = new Op(3);
	Op* op2 = new Op(2.5);

	Mult* A = new Mult(op7, op4);
	Add* B = new Add(op3,A);
	Sub* C = new Sub(B, op2);
	Sqr* D = new Sqr(C);

	cout << A->evaluate() << endl;
	cout << B->evaluate() << endl;
	cout << C->evaluate() << endl;
	cout << D->evaluate() << endl;
	
	cout << "Ceil, Floor, and Abs: " << endl;
	cout << "Ceil class: " << endl;
	Ceil* E = new Ceil(C);
	cout << E->evaluate() << endl;
	cout << "Floor class: " << endl;
	Floor* F = new Floor(C);
	cout << F->evaluate() << endl;
	cout << "Abs class: " << endl;
	Abs* G = new Abs(C);
	cout << G->evaluate() << endl;
	
	ListContainer* container = new ListContainer();
	container->add_element(A);
        container->add_element(B);
        container->add_element(C);
        container->add_element(D);
        cout << "Container Before Sort: " << endl;
        container->print();
        cout << "Container After Sort: " << endl;;
	container->set_sort_function(new SelectionSort());
	container->sort();
	container->print();
	return 0;
}
     
