// C++ program to convert
// a Vector to Set

#include <iostream>
#include <set>
#include <vector>
using namespace std;

// Function to convert Vector to Set
set<int> convertToSet(vector<int> v)
{
	// using range of vector
	set<int> s(v.begin(), v.end());
	return s;
}

void printSet(set<int> s)
{
	cout << "Set: ";
	for (int x : s)	cout << x << " ";
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
	vector<int> vec = { 1, 2, 3, 1, 1 };
	printVector(vec);

	// Convert Vector to Set
	set<int> s = convertToSet(vec);
	printSet(s);

	return 0;
}

