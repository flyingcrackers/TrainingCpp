#include "Header.h"
#include <iostream>

using namespace std;

Header::Header() {
	//
}

void Header::someVoid()
{
	cout << "Function: " << __FUNCTION__ << endl
		<< "Argument List: " << __argc << endl
		<< "Return type: " << "void" << endl;
}

char Header::someChar()
{
	cout << "Function: " << __FUNCTION__ << endl
		<< "Argument List: " << __argc << endl
		<< "Return type: " << "char" << endl;
	return 0;
}

int Header::someInt()
{
	cout << "Function: " << __FUNCTION__ << endl
		<< "Argument List: " << __argc << endl
		<< "Return type: " << "int" << endl;
	return 0;
}

float Header::someFloat()
{
	cout << "Function: " << __FUNCTION__ << endl
		<< "Argument List: " << __argc << endl
		<< "Return type: " << "float" << endl;
	return 0.0f;
}
