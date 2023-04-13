#include <iostream>
#include <array>

int main() {
	std::array<int, 5> arr = {1, 2, 3, 4, 5};

	// Accessing elements of the array
	std::cout << "arr[0]: " << arr[0] << std::endl;
	std::cout << "arr[2]: " << arr[2] << std::endl;

	// Modifying an element of the array
	arr[1] = 10;

	// Iterating over the array
	for (int i = 0; i < arr.size(); i++) {
		std::cout << "arr[" << i << "]: " << arr[i] << std::endl;
	}

	return 0;
}

