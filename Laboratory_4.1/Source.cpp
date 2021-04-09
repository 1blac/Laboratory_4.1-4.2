#include "List.h"
#include "Stack.h"
#include "Queue.h"
#include <iostream>
#include <ctime>
#include <stack>

using namespace std;

int main()
{
	List* A[2];
	A[0] = new Stack;
	A[1] = new Queue;
	Elem* stack = A[0]->getList();
	Elem* first = A[1]->getList();
	Elem* last = A[1]->getList();

	cout << "Stack:" << endl;

	for (int i = 0; i <= 10; i++)
	{
		A[0]->push(stack, stack, i);
	}
	while (stack != NULL)
	{
		cout << A[0]->pop(stack, stack) << endl;
	}

	cout << endl;
	cout << "The real class of A[0]: " << typeid(*A[0]).name() << endl << endl;
	cout << "Queue:" << endl;

	for (int i = 0; i <= 10; i++)
	{
		A[1]->push(first, last, i);
	}
	while (first != NULL)
	{
		cout << A[1]->pop(first, last) << endl; 
	}

	cout << endl;
	cout << "The real class of A[1]: " << typeid(*A[1]).name() << endl;

	delete A[0];
	delete A[1];
	return 0;
}
