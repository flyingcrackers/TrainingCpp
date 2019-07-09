#include<iostream>
#include<fstream>
#include <string>

using namespace std;

int main() {
	int whiteCount = 0;
	string storeOut = "";
	const char WHITE_SPACE(32);

	ifstream in("example.txt");
	while (in.good()) {
		if (in.get() == WHITE_SPACE) {
			whiteCount++;
		}
	}

	cout << "White Spaces: " << whiteCount << endl;
	system("pause");
	return 0;
}
