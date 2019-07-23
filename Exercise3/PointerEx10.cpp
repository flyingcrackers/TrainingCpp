#include <iostream>

int main() {
	char str[100];
	int incVal = 0;
	std::cout << "Input a string : ";
	std::cin >> str;
	char *ptrStr = str;

	while (*(ptrStr + incVal) != NULL) {
		incVal++;
	}

	std::cout << "The length of the given string ";
	for (int disArray = 0; disArray < incVal; disArray++) {
		std::cout << *(ptrStr + disArray);
	}
	std::cout << "\n";
	std::cout << "is : " << incVal << "\n";

	system("pause");
}
