#include <iostream>
#include <unordered_map>
using namespace std;

int main (){
	unordered_map<int, string> uMap;

	uMap[101] = "John";
	uMap[102] = "Marry";
	uMap[103] = "Kim";
	uMap[104] = "Jo";
	uMap[105] = "Ramesh";

	for (int i = 103; i < 108; i++) {
		if (uMap.count(i) == 0)
			cout << i <<" is not an element of uMap.\n";
		else
			cout << i <<" is an element of uMap.\n";
	}

	return 0;
}
