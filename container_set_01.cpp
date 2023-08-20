// C++ program to convert
// a Vector to Set

#include <iostream>
#include <set>
#include <vector>
using namespace std;

set<int> convertToSet(vector<int> v)
{
	set<int> s;

	// Traverse the Vector
	for (int x : v) {
		s.insert(x);
	}

	return s;
}

void printSet(set<int> s)
{
	cout << "Set: ";
	for (int x : s) cout << x << " ";
	cout << endl;
}

void printVector(vector<int> vec)
{
	cout << "Vector: ";
	for (int x : vec) cout << x << " ";
	cout << endl;
}

int main()
{
	// Vector
	vector<int> vec = { 1, 2, 3, 1, 1 };
	printVector(vec);

	// Convert Vector to Set
	set<int> s = convertToSet(vec);
	printSet(s);

	return 0;
}

