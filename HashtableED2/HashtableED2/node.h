#pragma once
#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED

class node {
public:
	int data;
	int key;
	int pos_in_file;
	node * next;

	node(int);
	node();
};

#endif // !NODE_H_INCLUDED