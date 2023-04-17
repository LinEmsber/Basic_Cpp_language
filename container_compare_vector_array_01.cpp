#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	// Declare an array of fixed size 5 and initialize it with values.
	int my_array[5] = {3, 1, 4, 2, 5};

	// Output the contents of the array.
	std::cout << "Array contents: ";
	for (int i = 0; i < 5; ++i) {
		std::cout << my_array[i] << ' ';
	}
	std::cout << std::endl;

	// Sort the array using the STL algorithm std::sort().
	std::sort(my_array, my_array + 5);

	// Output the sorted array.
	std::cout << "Sorted array: ";
	for (int i = 0; i < 5; ++i) {
		std::cout << my_array[i] << ' ';
	}
	std::cout << std::endl;

	// Declare a vector and initialize it with the same values as the array.
	std::vector<int> my_vector = {3, 1, 4, 2, 5};

	// Output the contents of the vector.
	std::cout << "Vector contents: ";
	for (int value : my_vector) {
		std::cout << value << ' ';
	}
	std::cout << std::endl;

	// Sort the vector using the STL algorithm std::sort().
	std::sort(my_vector.begin(), my_vector.end());

	// Output the sorted vector.
	std::cout << "Sorted vector: ";
	for (int value : my_vector) {
		std::cout << value << ' ';
	}
	std::cout << std::endl;

	return 0;
}

