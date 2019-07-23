#include <iostream>

void AddTwoNum(int&, int&);

int main() {
	int firstNum = 0;
	int secondNum = 0;

	std::cout << "Input the first number : ";
	std::cin >> firstNum;
	std::cout << "Input the second number : ";
	std::cin >> secondNum;

	AddTwoNum(firstNum, secondNum);

	system("pause");
}

void AddTwoNum(int& fNum, int& sNum) {
	int sum = 0;
	sum = fNum + sNum;
	std::cout << "The sum of " << fNum << " and " << sNum << " is " << sum << "\n";
}
