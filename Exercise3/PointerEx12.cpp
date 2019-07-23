#include <iostream>

int main() {
	int inputNum = 0;
	int factorialStore = 1;
	std::cout << "Input a number : ";
	std::cin >> inputNum;
	int *ptrNum = &inputNum;
	int *ptrFStore = &factorialStore;

	for (int decreVal = *ptrNum; decreVal > 0; --decreVal) {
		*ptrFStore *= decreVal;
	}

	std::cout << "The Factorial of " << *ptrNum << " is : " << *ptrFStore << "\n";


	system("pause");
}
