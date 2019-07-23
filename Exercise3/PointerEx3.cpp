#include <iostream>

int main() {
	int m = 300;
	double fx = 300.6006;
	char cht[] = { 'z' };

	std::cout << "Pointer : Demonstrate the use of & and * operator: " << "\n"
			  << "-----------------------------------------------------\n";
	std::cout << "m = " << m << "\n";
	std::cout << "fx = " << fx << "\n";
	std::cout << "cht = " << cht[0] << "\n\n";

	std::cout << "Using & operator : " << "\n"
			  << "---------------------\n";
	std::cout << "Address of m = " << &m << "\n";
	std::cout << "Address of fx = " << &fx << "\n";
	std::cout << "Address of cht = " << &cht << "\n\n";

	int *mPtr = &m;
	double *mFx = &fx;
	char *mCht = cht;

	std::cout << "Using & and * operator : " << "\n"
		      << "---------------------------\n";
	std::cout << "Value at address of m = " << *mPtr << "\n";
	std::cout << "Value at address of fx = " << *mFx << "\n";
	std::cout << "Value at address of cht = " << *mCht << "\n\n";

	std::cout << "Using only pointer variable : " << "\n"
			  << "--------------------------------\n";
	std::cout << "address of m = " << mPtr << "\n";
	std::cout << "address of x = " << mFx << "\n";
	std::cout << "address of cht = " << static_cast<void *>(mCht) << "\n\n";

	std::cout << "Using only pointer operator : " << "\n"
			  << "--------------------------------\n";
	std::cout << "Value at address of m = " << *mPtr << "\n";
	std::cout << "Value at address of x = " << mFx << "\n";
	std::cout << "Value at address of cht = " << *mCht << "\n";


	system("pause");

}
