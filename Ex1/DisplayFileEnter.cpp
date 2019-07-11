//: C02:Fillvector.cpp
// Copy an entire file into a vector of string
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main() {
	vector<string> v;
	ifstream in("DisplayFile.cpp");
	string line;
	string a = "\n";
	int count = 0;
	bool check = true;
	while (getline(in, line))
		v.push_back(line); 
	while (check) {
		cout << "Press 'Enter' key:" << endl;
		if (cin.get() == '\n') {

			cout << v[count] << endl;
		}
		else {
			check = false;
		}
		count++;
	}

	system("pause");
} ///:~
