//: C02:Fillvector.cpp
// Copy an entire file into a vector of string
#include <string>
#include <iostream>
#include <fstream>3
#include <vector>
using namespace std;
int main() {
	vector<string> v;
	ifstream in("FillVectorAct1.cpp");
	string line;
	while (getline(in, line))
		v.push_back(line); 
	for (int i = v.size() - 1; i > 0; i--)
		cout << v[i] << endl;

	cout << v.size() << endl;

	system("pause");
} ///:~
