#pragma once
#include "List.h"
#include <string>
#include <iostream>
using namespace std;
class Stack : public List
{
protected:
	
	Elem* list = NULL;
public:
	virtual Elem* getList() { return this->list; };

	virtual void push(Elem*& first, Elem*& last, Info value)
	{
		Elem* tmp = new Elem;
		tmp->info = value;
		tmp->link = last;
		last = tmp;
	}
	virtual Info pop(Elem*& first, Elem*& last)
	{
		Elem* tmp = last->link;
		Info value = last->info;
		delete last;
		last = tmp;
		return value;
	}
};
