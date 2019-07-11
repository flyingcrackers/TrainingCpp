#include "Header.h"
#include <iostream>

using namespace std;

int main() {
	int inputNum = 0;
	Header h;
	cout << "Choose option: " << endl
		<< "Option 1: " << "Void" << endl
		<< "Option 2: " << "Char" << endl
		<< "Option 3: " << "Int" << endl
		<< "Option 4: " << "Float" << endl
		<< "Other numbers: " << "Exit" << endl;
	cin >> inputNum;

	while (inputNum > 4 && inputNum < 1) {
		cout << "Input number not within range!" << endl;
		cin >> inputNum;
	}

	while (inputNum > 0 && inputNum < 5) {
		switch (inputNum)  {
			case 1:
				h.someVoid();
				break;
			case 2:
				h.someChar();
				break;
			case 3:
				h.someInt();
				break;
			case 4:
				h.someFloat();
				break;
			default:
				cout << "Input number not within range!" << endl;
		}
		cout << "Choose option: " << endl
			<< "Option 1: " << "Void" << endl
			<< "Option 2: " << "Char" << endl
			<< "Option 3: " << "Int" << endl
			<< "Option 4: " << "Float" << endl
			<< "Other numbers: " << "Exit" << endl;
		cin >> inputNum;
	}

	system("pause");
}
