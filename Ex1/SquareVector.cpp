//: C02:Fillvector.cpp
// Copy an entire file into a vector of string
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main() {
	vector<float> v;
	float vFloat = 0;
	for (int countFloat = 0; countFloat < 25; countFloat++) {
		cout << "Input float for vector: ";
		cin >> vFloat;
		v.push_back(vFloat);
	}

	cout << "Before Multiplication: " << endl;

	for (int displayVector = 0; displayVector < 25; displayVector++) {
		cout << "v[" << displayVector << "]: " << v[displayVector] << endl;
	}

	for (int squareVector = 0; squareVector < 25; squareVector++) {
		v[squareVector] = (v[squareVector] * v[squareVector]);
	}

	for (int displaySquare = 0; displaySquare < 25; displaySquare++) {
		cout << "v[" << displaySquare << "]: " << v[displaySquare] << endl;
	}

	system("pause");
} ///:~
