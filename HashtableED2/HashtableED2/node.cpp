#include "stdafx.h"
#include "node.h"

node::node() {}

node::node(int value) {
	this->data = -1;
	this->key = value;
	this->next = nullptr;
	this->pos_in_file = -1;
}