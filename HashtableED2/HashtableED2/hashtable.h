#pragma once
#ifndef HASHTABLE_H_INCLUDED
#define HASHTABLE_H_INCLUDED

#include "list.h"
#include <vector>
using namespace std;

class hashtable
{
private:
	int size;
	int cant = 0;
public:
	void test();
	list arr[10];
	void add(int value);
	void search(int value);
	void erase(int value);
	int hash_func(int key);
	hashtable();
	~hashtable();
};

#endif // !HASHTABLE_H_INCLUDED