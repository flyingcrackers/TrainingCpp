//: C02:Fillvector.cpp
// Copy an entire file into a vector of string
#include <string>
#include <iostream>
#include <fstream>3
#include <vector>
using namespace std;
int main() {
	vector<string> v;
	ifstream in("FillVectorAct2.cpp");
	string line;
	string concatAll = "";
	while (getline(in, line))
		v.push_back(line);
	for (int i = 0; i < v.size(); i++) {
		concatAll += v[i];
		cout << i << ": " << v[i] << endl;
	}
	cout << "Concat All: " << concatAll << endl;

	system("pause");
} ///:~
