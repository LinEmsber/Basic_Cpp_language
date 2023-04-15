#include <iostream>

// Function template definition
template <typename T>
T add(T a, T b) {
	return a + b;
}

int main() {
	int a = 1, b = 2;
	double c = 1.5, d = 2.5;

	std::cout << "Addition of integers: " << add(a, b) << std::endl; // Calls the 'add' function with type 'int'
	std::cout << "Addition of doubles: " << add(c, d) << std::endl; // Calls the 'add' function with type 'double'

	return 0;
}
