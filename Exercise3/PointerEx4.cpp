#include <iostream>

int main() {
	int firstNum = 0;
	int secondNum = 0;
	int *ptrFNum = &firstNum;
	int *ptrSNum = &secondNum;

	int sumPointers = 0;
	int *ptrSPointers = &sumPointers;

	std::cout << "Input first number : ";
	std::cin >> firstNum;
	std::cout << "Input second number : ";
	std::cin >> secondNum;

	*ptrSPointers = *ptrFNum + *ptrSNum;

	std::cout << "The sum of the entered numbers is : " << *ptrSPointers << "\n";

	system("pause");
}
