#include <iostream>

int main() {
	int m = 29;

	std::cout << "Address of m : " << &m << "\n";
	std::cout << "Value of m : " << m << "\n\n";

	int *ab = &m;
	std::cout << "Now ab is assigned with the address of m." << "\n";
	std::cout << "Address of pointer ab : " << ab << "\n";
	std::cout << "Content of pointer ab : " << *ab << "\n\n";

	m = 34;
	std::cout << "The value of m assigned to 34 now." << "\n";
	std::cout << "Address of pointer ab : " << ab << "\n";
	std::cout << "Content of pointer ab : " << *ab << "\n\n";

	*ab = 7;
	std::cout << "The pointer variable ab is assigned with the value of 7 now." << "\n";
	std::cout << "Address of m : " << &m << "\n";
	std::cout << "Value of m : " << m << "\n";


	system("pause");
}
