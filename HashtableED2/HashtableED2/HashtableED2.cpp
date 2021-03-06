 // HashtableED2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "hashtable.h"

using namespace std;

int main()
{
	hashtable htable;
	int opc = 9;
	
	do{
		cout << "::HASHTABLE + BINARY FILE::" << endl;
		cout << "" << endl;
		cout << "Choose an option..." << endl;
		cout << "1.) Add" << endl;
		cout << "2.) Search" << endl;
		cout << "3.) Delete" << endl;
		cout << "-";
		cin >> opc;
		switch (opc)
		{
		case 1:
			system("CLS");
			int value;
			cout << "::ADD::" << endl;
			cout << "" << endl;
			cout << "Write the number you wish to add: ";
			cin >> value;
			htable.add(value);
			cout << "Number added correctly!" << endl;
			cout << "" << endl;
			cout << "Return to main menu?..." << endl;
			cout << "1.) Yes" << endl;
			cout << "2.) No" << endl;
			cout << "-";
			cin >> opc;
			if (opc == 2) {
				opc = 0;
			}
			system("CLS");
			break;
		case 2:
			system("CLS");
			int value1;
			cout << "::SEARCH::" << endl;
			cout << "" << endl;
			cout << "Write the number you want to search: ";
			cin >> value1;
			htable.search(value1);
			cout << "" << endl;
			cout << "Return to main menu?..." << endl;
			cout << "1.) Yes" << endl;
			cout << "2.) No" << endl;
			cout << "-";
			cin >> opc;
			if (opc == 2) {
				opc = 0;
			}
			system("CLS");
			break;
		case 3:
			system("CLS");
			int value2;
			cout << "::DELTE::" << endl;
			cout << "" << endl;
			cout << "Write the number you want to delete: ";
			cin >> value2;
			htable.erase(value2);
			cout << "Number deleted correctly!" << endl;
			cout << "" << endl;
			cout << "Return to main menu?..." << endl;
			cout << "1.) Yes" << endl;
			cout << "2.) No" << endl;
			cout << "-";
			cin >> opc;
			if (opc == 2) {
				opc = 0;
			}
			system("CLS");
			break;
		case 4:
			htable.test();
		default:
			break;
		}
	} while (opc != 0);
    return 0;
}

