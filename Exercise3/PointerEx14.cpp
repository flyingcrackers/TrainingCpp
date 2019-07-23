#include <iostream>

int main() {
	int inputNum = 0;
	int tempVal1 = 0;
	int tempVal2 = 0;

	std::cout << "Input the number of elements to store in the array: ";
	std::cin >> inputNum;

	int* arrInt = new int[inputNum];

	std::cout << "Input 5 number of elements in the array :\n";

	for (int incVal = 0; incVal < inputNum; incVal++) {
		std::cout << "element - " << incVal << " : ";
		std::cin >> *(arrInt + incVal);
	}

	for (int presVal = 0; presVal < inputNum; presVal++) {
		for (int checkVal = 0; checkVal < inputNum; checkVal++) {
			if (*(arrInt + presVal) < *(arrInt + checkVal)) {
				tempVal1 = *(arrInt + presVal);
				tempVal2 = *(arrInt + checkVal);
				*(arrInt + presVal) = tempVal2;
				*(arrInt + checkVal) = tempVal1;
			}			
		}
	}
	std::cout << "\n";
	std::cout << "The elements in the array after sorting :\n";
	for (int disArray = 0; disArray < inputNum; disArray++) {
		std::cout << "element - " << disArray << " : " << *(arrInt + disArray) << "\n";
	}

	system("pause");

	delete[] arrInt;
}
