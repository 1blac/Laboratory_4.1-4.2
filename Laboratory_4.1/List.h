#pragma once
#include <string>
#include <iostream>
using namespace std;
typedef int Info;
struct Elem
{
	Elem* link;
	Info info;
};

class List
{
protected:
	Elem* list = NULL;
public:
	virtual Elem* getList() = 0;
	virtual void push(Elem*& first, Elem*& last, Info value) = 0;
	virtual Info pop(Elem*& first, Elem*& last) = 0;
	
	
};
