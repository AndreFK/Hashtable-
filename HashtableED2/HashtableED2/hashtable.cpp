#include "stdafx.h"
#include "hashtable.h"


hashtable::hashtable()
{
	this->size = 10;
}


hashtable::~hashtable()
{
}

void hashtable::test() {
	arr[1].test();
}

void hashtable::add(int value) {
	int key = hash_func(value);
	arr[key].add(value, key);
	cant++;
}

void hashtable::search(int value) {
	if (cant != 0) {
		int x = hash_func(value);
		arr[x].search(value);
	}
	else {
		cout << "Nothing found..." << endl;
	}
}

void hashtable::erase(int value) {
	int y = hash_func(value);
	arr[y].erase(value); 
	cant--;
}

int hashtable::hash_func(int data) {
	return data % size;
}
