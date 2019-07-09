#include<iostream>
#include<fstream>
#include <string>

using namespace std;

int main() {
	int arrCount = 0;
	int incCount = 0;
	int count = 0;
	int occNum = 0;
	string arrOut[256];

	string str;

	ifstream inputFile("example.txt");
	while (inputFile.good()) {
		inputFile >> str;
		arrOut[incCount] = str;
		incCount++;
	}
	while (arrOut[count] != "") {
		count++;
	}

	for (int i = 0; i < count; i++) {
		for (int j = 0; j < count; j++) {
			if (arrOut[i] == arrOut[j]) {
				occNum++;
			}
		}
		cout << arrOut[i] << "'s occurences: " << occNum << endl;
		occNum = 0;
	}
	inputFile.close();
	system("pause");
	return 0;
}
