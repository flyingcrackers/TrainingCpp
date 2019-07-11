//: C02:Fillvector.cpp
// Copy an entire file into a vector of string
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main() {
	vector<float> v;
	float inputFloat = 0;
	for (int countFloat = 0; countFloat < 25; countFloat++) {
		cout << "Input float: " << endl;
		cin >> inputFloat;
		v.push_back(inputFloat);
	}

	for (int displayCount = 0; displayCount < 25; displayCount++) {
		cout << "v[" << displayCount << "]: " << v[displayCount] << endl;
	}

	system("pause");
} ///:~
