
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	std::vector<int> numbers = {1, 3, 2, 5, 4};

	// Using lambda function to sort the vector in descending order
	std::sort(numbers.begin(), numbers.end(), [](int a, int b) { return a > b; });

	// Displaying the sorted vector
	for (int number : numbers) {
		std::cout << number << " ";
	}
	std::cout << std::endl;

	return 0;
}


