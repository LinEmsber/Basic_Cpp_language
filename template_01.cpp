// In C++, a template is a mechanism that allows you to define a generic class or function that can work with different data types, without having to write separate code for each data type. Templates are a powerful tool that enables you to create flexible and reusable code.

#include <iostream>

using namespace std;

template<typename T>
T my_max(T a, T b) {
	return a > b ? a : b;
}

int main()
{
	int a = 5, b = 10;
	cout << my_max(a, b) << endl;  // Output: 10

	double c = 3.14, d = 2.71;
	cout << my_max(c, d) << endl;  // Output: 3.14

	string e = "foo", f = "bar";
	cout << my_max(e, f) << endl;  // Output: "foo"
}
