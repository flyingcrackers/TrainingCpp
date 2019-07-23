#include <iostream>



int main() {
	int cInput = 0;
	std::cout << "Input the number of elements to store in the array : ";
	int inArrayNum = 0;
	std::cin >> inArrayNum;
	int* arrPointer = new int[inArrayNum];
	int inputNum = 0;

	std::cout << "Input 5 number of elments in the array : \n";
	while (cInput < 5) {
		std::cout << "element - " << cInput << " : ";
		std::cin >> inputNum;
		*(arrPointer + cInput) = inputNum;
		cInput++;
	}

	std::cout << "\n";

	std::cout << "The elements you entered are : " << "\n";
	for (int disArray = 0; disArray < inArrayNum; disArray++) {
		std::cout << "element - " << disArray << " : " << *(arrPointer + disArray) << "\n";
	}
	
	delete[] arrPointer;

	system("pause");
}
