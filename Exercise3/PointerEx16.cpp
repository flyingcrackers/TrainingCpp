#include <iostream>

int main() {
	int inputNum = 0;
	int sum = 0;
	int *ptrSum = &sum;
	std::cout << "Input the number of elements to store in the array (max 10) : ";
	std::cin >> inputNum;
	int* arrInt = new int[inputNum];

	std::cout << "Input 5 number of elements in the array :\n";
	for (int incVal = 0; incVal < inputNum; incVal++) {
		std::cout << "element - " << incVal << " : ";
		std::cin >> *(arrInt + incVal);
		*ptrSum += *(arrInt + incVal);
	}

	std::cout << "The sum of array is : " << *ptrSum << "\n";

	system("pause");

	delete[] arrInt;
}
