#include <iostream>
#include <vector>

int main() {
	// Create an empty vector of integers
	std::vector<int> vector_obj;

	// Add elements to the vector
	vector_obj.push_back(10);
	vector_obj.push_back(20);
	vector_obj.push_back(30);

	// Access elements in the vector
	std::cout << "First element: " << vector_obj[0] << std::endl;
	std::cout << "Second element: " << vector_obj[1] << std::endl;
	std::cout << "Third element: " << vector_obj[2] << std::endl;

	// Get the size of the vector
	std::cout << "Vector size: " << vector_obj.size() << std::endl;

	// Iterate through the vector and print elements
	std::cout << "Iterating through the vector:" << std::endl;
	for (int number : vector_obj) {
		std::cout << number << std::endl;
	}

	// Remove the last element from the vector
	vector_obj.pop_back();

	// Check the new size of the vector
	std::cout << "Vector size after pop_back: " << vector_obj.size() << std::endl;

	return 0;
}

