#include <iostream>

int main() {
	char inputString[100];
	char *ptrChar = inputString;
	int incVal = 0;
	std::cout << "Input a string : ";
	std::cin >> inputString;

	while (*(ptrChar + incVal) != NULL) {
		incVal++;
	}

	std::cout << "Reverse of the string is : ";
	for (int decVal = incVal; decVal >= 0; decVal--) {
		std::cout << *(ptrChar + decVal);
	}

	std::cout << "\n";

	system("pause");

}
