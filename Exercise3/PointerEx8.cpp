#include <iostream>

int main() {
	char str[] = "abcd";
	char *ptrStr = str;
	int size = strlen(str);
	
	int permuNum = 0;
	int totalPermu = 1;

	for (int cPermu = size; cPermu > 0; cPermu--) {
		totalPermu *= cPermu;
		std::cout << totalPermu << "\n";
	}

	for (int iterate = 0; iterate < size; iterate++) { // first letter
		for (int pivot = 1; pivot < (totalPermu / size); pivot++) { //second letter
			for (int inner = 0; inner < (size / 2); inner++) {
				for(int shuffle)
			}
		}
	}

	std::cout << &str << "\n";
	std::cout << *(ptrStr + 1) << "\n";

	system("pause");


}
