//: C02:Fillvector.cpp
// Copy an entire file into a vector of string
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main() {
	vector<float> fVector;
	vector<float> sVector;
	vector<float> sumVector;
	float firstFloat = 0;
	float secondFloat = 0;
	float sumFloat = 0;
	for (int countFloat1 = 0; countFloat1 < 25; countFloat1++) {
		cout << "Input float for first vector: ";
		cin >> firstFloat;
		fVector.push_back(firstFloat);
	}
	for (int countFloat2 = 0; countFloat2 < 25; countFloat2++) {
		cout << "Input float for second vector: ";
		cin >> secondFloat;
		sVector.push_back(secondFloat);
	}
	for (int countFloat3 = 0; countFloat3 < 25; countFloat3++) {
		sumVector.push_back(fVector[countFloat3] + sVector[countFloat3]);
	}

	for (int displayFirst = 0; displayFirst < 25; displayFirst++) {
		cout << "First Vector: " << fVector[displayFirst] << endl;
	}
	
	for (int displaySecond = 0; displaySecond < 25; displaySecond++) {
		cout << "Second Vector: " << sVector[displaySecond] << endl;
	}

	for (int displaySum = 0; displaySum < 25; displaySum++) {
		cout << "Sum Vector: " << sumVector[displaySum] << endl;
	}
	

	system("pause");
} ///:~
