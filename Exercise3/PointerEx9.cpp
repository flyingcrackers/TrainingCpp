#include <iostream>

int main() {
	int inputNum = 0;
	int inArray = 0;
	int countInput = 0;
	int largerCount = 0;
	std::cout << "Input total number of elements(1 to 100) : ";
	std::cin >> inputNum;
	int* arrPointer = new int[inputNum];

	while (countInput < inputNum) {
		std::cout << "Number " << countInput + 1 << ": ";
		std::cin >> inArray;
		*(arrPointer + countInput) = inArray;
		countInput++;
	}

	for (int presDigit = 0; presDigit < inputNum; presDigit++) {
		for (int checkDigit = 0; checkDigit < inputNum; checkDigit++) {
			if (*(arrPointer + presDigit) > *(arrPointer + checkDigit)) {
				largerCount++;
			}
		}		
		if (largerCount == inputNum - 1) {
			std::cout << "The Largest element is : " << *(arrPointer + presDigit) << "\n";
		}
		largerCount = 0;
	}

	system("pause");

	delete[] arrPointer;

}
