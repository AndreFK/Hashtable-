#pragma once
#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#include "node.h"
#include <iostream>
#include <fstream>

using namespace  std;

struct file_content {
	int data;
	int key;
};

class list
{
private:
	node * root;
	node * last;
	int cant;
	string file_name = "data.dat";
	void add_node(node * n);
public:
	void test();
	void write(file_content * f, node * n);
	void erase_file(int value);
	void add(int value, int key);
	void search(int value);
	void erase(int value);

	list();
	~list();
};

#endif 