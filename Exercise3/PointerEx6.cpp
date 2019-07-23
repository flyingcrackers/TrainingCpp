#include <iostream>

int main() {
	int firstNum = 0;
	int secondNum = 0;
	
	int *ptrFNum = &firstNum;
	int *ptrSNum = &secondNum;

	std::cout << "Input first number : ";
	std::cin >> firstNum;
	std::cout << "Input second number : ";
	std::cin >> secondNum;

	if (*ptrFNum > *ptrSNum) {
		std::cout << *ptrFNum << " is the maximum number." << "\n";
	}
	else {
		std::cout << *ptrSNum << " is the maximum number." << "\n";
	}

	system("pause");
}
