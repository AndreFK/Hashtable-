#include "stdafx.h"
#include "list.h"


list::list()
{
	this->root = nullptr;
	this->last = root;
	this->cant = 0;
}

void list::test() {
	cout << root->next->data << endl;
}

void list::add(int value, int key) {
	node * n = new node(key);
	n->data = value;
	file_content * f = new file_content();
	f->data = value;
	f->key = key;
	write(f, n);
	add_node(n);
	cout << "Key: " << n->key << endl;
	cout << "Number: " << n->data << endl;
	cout << "Position in file: " << n->pos_in_file << endl;
	cant++;
}

void list::add_node(node * n) {
	if (root == nullptr) {
		root = n;
		last = n;
	}
	else {
		last->next = n;
		last = n;
	}
}

void list::search(int data) {
	if (root = nullptr) {
		cout << "This number doesnt exist..." << endl;
	}
	if (last->data = data) {
		cout << "Number " << last->data << " found" << endl;
		cout << "Position in the file: " << last->pos_in_file << endl;
	}
	else {
		node * tmp = root;
		for (int i = 0; i < cant; i++) {
			if (tmp->data != data) {
				tmp = tmp->next;
			}
			if (i = cant - 1 && tmp->data != data) {
				cout << "This value was not found..." << endl;
			}
		}
		cout << "Number " << tmp->data << " found" << endl;
		cout << "Position in the file: " << tmp->pos_in_file << endl;
	}
}

void list::erase(int key) {
	if (root->data == key) {
		root = root->next;
		cant--;
	}
	if (last->data == key) {
		node * tmp = root;
		for (int i = 0; i < cant - 1; i++) {
			tmp = tmp->next;
		}
		last = tmp;
		cant--;
	}
	else {
		node * tmp = root;
		for (int i = 0; i < cant; i++) {
			if (tmp->next->data != key) {
				tmp = tmp->next;
			}
		}
		tmp->next = tmp->next->next;
		cant--;
	}
}

void list::write(file_content * f, node * n) {
	ofstream writer(file_name.c_str(), ios::in | ios::out | ios::binary);
	if (!writer.is_open()) {
		writer.open(file_name.c_str());
	}
	writer.seekp(0, ios::end);
	int pos = writer.tellp();
	n->pos_in_file = pos - (sizeof(int)*2);
	writer.write((char*)&n, sizeof(file_content));
}

void list::erase_file(int pos) {
	file_content * tmp = new file_content();
	tmp->data = -1;
	tmp->key = -1;
	ofstream writer(file_name.c_str(), ios::in | ios::out | ios::binary);
	if (!writer.is_open()) {
		writer.open(file_name.c_str());
	}
	writer.seekp(0, pos);
	writer.write((char*)&tmp, sizeof(file_content));
}

list::~list()
{
}
