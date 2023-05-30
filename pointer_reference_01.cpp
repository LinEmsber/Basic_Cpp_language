#include <iostream>

int main() {
	int x = 10;

	int &ref = x;
	int *ptr = &x;

	std::cout << "Value of x using reference: " << ref << std::endl;
	std::cout << "Value of x using pointer: " << *ptr << std::endl;

	x = 10000;
	std::cout << "New value of x using reference: " << ref << std::endl;
	std::cout << "New value of x using pointer: " << *ptr << std::endl;

	int y = 20;
	*ptr = 20000;
	std::cout << "New value of x using reference: " << ref << std::endl;
	std::cout << "New value of x using pointer: " << *ptr << std::endl;

	ptr = &y;
	std::cout << "Value of y using pointer: " << *ptr << std::endl;

	// Reference cannot be reassigned to y
	// ref = y; // This will change the value of x to 20, not reassign the reference

	return 0;
}

