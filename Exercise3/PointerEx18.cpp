#include <iostream>
#include <stdio.h>

struct SomeGuy
{
	char name[50];
	char street[50];
}
employee = { "John Alter","Court Street" }, 
*pt = &employee;

int main() {
	std::cout << (*pt).name << " from " << (*pt).street << "\n";
	system("pause");
}
