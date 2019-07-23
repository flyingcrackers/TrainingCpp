#include <iostream>

struct EmpInfo
{
	char *empName;
	int empId;
};

int main() {
	EmpInfo alex;
	EmpInfo pat;
	EmpInfo robert;

	alex.empName = "Alex";
	alex.empId = 1002;
	pat.empName = "Patsu";
	pat.empId = 1905;
	robert.empName = "Bertsu";
	robert.empId = 1001;

	struct EmpInfo(*arrStruc[]) = { &alex,&pat,&robert };
	struct EmpInfo(*(*ptrStruc)[3]) = &arrStruc;
	std::cout << "address of arrStruc " << &arrStruc[0] << "\n";

	std::cout << "Employee Name : " << ptrStruc << "\n";
	std::cout << "Employee ID : " << (**(*ptrStruc + 0)).empId << "\n";
	//std::cout << "Employee Name : " << **ptrStruc[0].empName << "\n";
	std::cout << "Employee ID : " << arrStruc[0]->empName << "\n";
	//std::cout << "Employee ID : " << (*(*ptrStruc + 0)).empId << "\n";
	std::cout << "Employee ID : " << arrStruc[0]->empId << "\n";


	int i = 10;
	int *ptr_i = &i;
	int **ptrptr_i = &ptr_i;

	std::cout << "address of i " << &i << "\n";
	std::cout << "address of ptr_i " << &ptr_i << "\n";
	std::cout << "address of ptrptr_i " << &ptrptr_i << "\n";
	std::cout << "address of ptr_i using ptrptr_i " << ptrptr_i << "\n";
	std::cout << "address of i using *ptrptr_i " << *ptrptr_i << "\n";
	std::cout << "value of i using **ptrptr_i " << **ptrptr_i << "\n";

	foo(&ptr_i);
	system("pause");

}

int foo(int **a)
{
	**a= 20;
	*a = new int;

	return 0;
}
