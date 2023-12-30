#include <vector>
#include <unordered_map>
#include <iostream>
#include <utility>

int main() 
{
	std::vector<std::pair<int, int>> v = { {1,10}, {2,20}, {3,30} };
	std::unordered_map<int, int> map(v.begin(), v.end());

	for (const auto &pair: map) {
		std::cout << pair.first << " :" << pair.second << std::endl;
	}

	return 0;
}
