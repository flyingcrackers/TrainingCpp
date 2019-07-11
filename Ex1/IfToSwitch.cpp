//: C03:Menu.cpp
// Simple menu program demonstrating
// the use of "break" and "continue"
#include <iostream>
using namespace std;
int main() {
	bool flag = true;
	while (flag) {
		char c;
		cout << "MAIN MENU:" << endl;
		cout << "l: left, r: right, q: quit -> ";
		cin >> c;
		switch (c) {
			case 'l': 
				cout << "LEFT MENU:" << endl;
				cout << "select a or b: ";
				cin >> c;
				switch (c) {
					case 'a':
						cout <<  "you chose 'a'" << endl;
						break;
					case 'b':
						cout << "you chose 'b'" << endl;
						break;
					default:
						cout << "you didn't choose a or b!" << endl;
					}
				break;
			case 'r':
				cout << "RIGHT MENU:" << endl;
				cout << "select c or d: ";
				cin >> c;
				switch (c) {
					case 'c':
						cout << "you chose 'c'" << endl;
						break;
					case 'd':
						cout << "you chose 'd'" << endl;
						break;
					default:
						cout << "you didn't choose c or d!" << endl;
					}
				break;
			case 'q':
				cout << "quitting menu..." << endl;
				flag = false;
				break;
			default:
				cout << "you must type l or r or q!" << endl;
		}
	}
} ///:~
