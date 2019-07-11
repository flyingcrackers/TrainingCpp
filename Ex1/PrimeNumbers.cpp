#include <iostream>
#include <vector>

using namespace std;

int main() {
	int inputNum;
	int remChecker = 0;
	int countZero = 0;

	cout << "Input number: ";
	cin >> inputNum;

	while (inputNum < 1) {
		cout << "Input only positive integers!" << endl;
		cin >> inputNum;
	}

	vector<int> storePrime;

	for (int dividendVal = 2; dividendVal < inputNum + 1; dividendVal++) {
		for (int divisorVal = 1; divisorVal < dividendVal + 1; divisorVal++) { 
			remChecker = dividendVal % divisorVal; 
			if (remChecker == 0) {
				countZero++;
			}
		}
		if (countZero < 3) {
			storePrime.push_back(dividendVal);
		}
		countZero = 0;
	}

	for (int outVector = 0; outVector < storePrime.size(); outVector++) {
		cout << "Prime Numbers: " << storePrime[outVector] << endl;
	}

	system("pause");

}
