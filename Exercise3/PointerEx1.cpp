#include <iostream>

int main() {
	int m = 10;
	int *z = &m;
	int n = 0;
	int o = 0;

	std::cout << "z stores the address of m = " << z << "\n";
	std::cout << "*z stores the value of m = " << *z << "\n";
	std::cout << "&m is the address of m = " << &m << "\n";
	std::cout << "&n stores the address of n = " << &n << "\n";
	std::cout << "&o stores the address of o = " << &o << "\n";
	std::cout << "&z stores the address of z = " << &z << "\n";

	system("pause");
}
