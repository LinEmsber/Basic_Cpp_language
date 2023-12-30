#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<vector<int>>v{ { 4, 5, 3 }, { 2, 7, 6 }, { 3, 2, 1 ,10 } };

	cout<<"the 2D vector is:"<<endl;

	// Printing the 2D vector
	for (const auto &row : v) {
		for (int element : row) {
			std::cout << element << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}
