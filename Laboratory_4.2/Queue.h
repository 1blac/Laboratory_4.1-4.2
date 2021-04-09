#pragma once
#include "List.h"
#include <string>
#include <iostream>
using namespace std;
class Queue : public List
{
protected:
	Elem* list = NULL;
public:
	virtual Elem* getList() { return this->list; };

	void push(Elem*& first, Elem*& last, Info value)
	{
		Elem* tmp = new Elem; // 1
		tmp->info = value; // 2
		tmp->link = NULL; // 3
		if (last != NULL)
			last->link = tmp; // 4
		last = tmp; // 5
		if (first == NULL)
			first = tmp; // 6
	}
	Info pop(Elem*& first, Elem*& last)
	{
		Elem* tmp = first->link; // 1
		Info value = first->info; // 2
		delete first; // 3
		first = tmp; // 4
		if (first == NULL)
			last = NULL; // 5
		return value; // 6
	}
};

