#include <iostream>

int main() {
	int asciiInt = 65;
	char asciiChar[1];

	int *intPtr = &asciiInt;
	char *charPtr = asciiChar;

	for (int incVal = 0; incVal < 26; incVal++) {
		*charPtr = *intPtr;
		*intPtr = *intPtr + 1;
		std::cout << *charPtr << " ";
	}

	std::cout << "\n";
	system("pause");

}
