#include <iostream>

void SwapElements(int &var1, int &var2, int &var3);

int main() {
	int inputNum = 0;
	int arrInt[3] = {0};

	std::cout << "Input the value of 1st element : ";
	std::cin >> inputNum;
	arrInt[0] = inputNum;
	std::cout << "Input the value of 2nd element : ";
	std::cin >> inputNum;
	arrInt[1] = inputNum;
	std::cout << "Input the value of 3rd element : ";
	std::cin >> inputNum;
	arrInt[2] = inputNum;

	std::cout << "The value before swapping are :\n";
	for (int beforeSwap = 0; beforeSwap < 3; beforeSwap++) {
		std::cout << "element " << beforeSwap << " = " << arrInt[beforeSwap] << "\n";
	}

	std::cout << "\n";

	SwapElements(arrInt[0], arrInt[1], arrInt[2]);

	std::cout << "The value before swapping are :\n";
	for (int afterSwap = 0; afterSwap < 3; afterSwap++) {
		std::cout << "element " << afterSwap << " = " << arrInt[afterSwap] << "\n";
	}

	system("pause");
}

void SwapElements(int &var1, int &var2, int &var3) {
	int tempVal1 = 0;
	int tempVal2 = 0;
	int tempVal3 = 0;
	tempVal1 = var1;
	tempVal2 = var2;
	tempVal3 = var3;
	var1 = tempVal3;
	var2 = tempVal1;
	var3 = tempVal2;

}
