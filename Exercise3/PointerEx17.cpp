#include <iostream>

int main() {
	int inputNum = 0;
	std::cout << "Input the number of elements to store in the array (max 15) : ";
	std::cin >> inputNum;
	int* arrInt = new int[inputNum];

	std::cout << "Input 5 number of elements in the array : \n";
	for (int inVal = 0; inVal < inputNum; inVal++) {
		std::cout << "element - " << inVal + 1 << " : ";
		std::cin >> *(arrInt + inVal);
	}

	std::cout << "\n";
	std::cout << "The elements of array in reverse order are : ";
	for (int disArray = inputNum; disArray >= 0; disArray--) {
		std::cout << "element - " << disArray + 1 << " : " << *(arrInt + disArray) << "\n";
	}

	delete[] arrInt;

	system("pause");
}
