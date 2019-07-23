#include <iostream>

int * LargerVal(int *fNum, int *sNum);

int main() {
	int firstNumber = 0;
	int secondNumber = 0;
	int sum = 0;

	//std::cin >> firstNumber;
	//std::cin >> secondNumber;

	int *ptrFirst = &firstNumber;
	int *ptrSecond = &secondNumber;
	int *result = NULL;

	std::cout << "Input the first number : ";
	std::cin >> *ptrFirst;
	std::cout << "Input the second number : ";
	std::cin >> *ptrSecond;
	

	result = LargerVal(ptrFirst, ptrSecond);
	std::cout << "The number " << *result << " is larger.\n";
	system("pause");

}

int * LargerVal(int *fNum, int *sNum) {
	//int largerNum = 0;
	//int *ptrLNum = new int;

	if (*fNum > *sNum)
		return fNum;
	else
		return sNum;
}
