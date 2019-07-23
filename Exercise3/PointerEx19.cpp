#include <iostream>

union Name{
	char *name1;
	char *name2;
};


int main() {
	union Name n, *uPtr = &n;

	n.name1 = "Jhon Mc";

	std::cout << (*uPtr).name1 << " " << (*uPtr).name2 << "\n";

	system("pause");
}
