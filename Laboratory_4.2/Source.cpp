#include "List.h"
#include "Stack.h"
#include "Queue.h"
#include <iostream>
#include <ctime>
#include <stack>

using namespace std;

int main()
{
	Stack* A[1];
	A[0] = new Stack;
	Queue* B[1];
	B[0] = new Queue;
	Elem* stack = A[0]->getList();
	Elem* first = B[0]->getList();
	Elem* last = B[0]->getList();

	cout << "Stack:" << endl;

	for (int i = 0; i <= 10; i++)
	{
		A[0]->push(stack, stack, i);
	}
	while (stack != NULL)
	{
		cout << A[0]->pop(stack, stack) << " ";
		cout << endl;
	}

	cout << endl;
	cout << "Queue:" << endl;

	for (int i = 0; i <= 10; i++)
	{
		B[0]->push(first, last, i);
	}
	while (first != NULL)
	{
		cout << B[0]->pop(first, last) << " ";
		cout << endl;
	}

	cout << endl;

	int y;
	List* C[4];
	C[0] = new Stack();
	C[1] = new Stack();
	C[2] = new Queue();
	C[3] = new Queue();
	cout << "Enter y: "; cin >> y;
	C[0]->push(stack, stack, y);
	C[1]->pop(stack, stack);
	cout << "The real class of B[0]: " << typeid(*C[0]).name() << endl;
	cout << "The real class of B[1]: " << typeid(*C[1]).name() << endl;
	cout << "Enter y: "; cin >> y;
	C[2]->push(first, last, y);
	C[3]->pop(first, last);
	cout << "The real class of B[2]: " << typeid(*C[2]).name() << endl;
	cout << "The real class of B[3]: " << typeid(*C[3]).name() << endl;
	delete C[0];
	delete C[1];
	delete C[2];
	delete C[3];
	return 0;
}