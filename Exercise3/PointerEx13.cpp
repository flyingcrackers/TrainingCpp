#include <iostream>

int main() {
	char inputString[100];
	char vowelArray[] = "aeiou";
	int totalChar = 0;
	int totalVowel = 0;
	int countVowel = 0;
	int countConsonant = 0;

	char *ptrVwl = vowelArray;
	

	std::cout << "Input a string : ";
	std::cin >> inputString;

	char *ptrStr = inputString;

	while (*(ptrStr + totalChar) != NULL) {
		totalChar++; //size
	}

	while (*(ptrVwl + totalVowel) != NULL) {
		totalVowel++; //size
	}

	for (int vowelIndex = 0; vowelIndex < totalVowel; vowelIndex++) {
		for (int charIndex = 0; charIndex < totalChar; charIndex++) {
			if (*(ptrVwl + vowelIndex) == *(ptrStr + charIndex)) {
				countVowel++;
			}
		}
	}

	countConsonant = totalChar - countVowel;

	std::cout << "Number of vowels : " << countVowel << "\n";
	std::cout << "Number of consonants : " << countConsonant << "\n";

	system("pause");

}
