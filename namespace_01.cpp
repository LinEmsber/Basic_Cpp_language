/* The variables are defined on the different namespaces. */

#include <iostream>

using namespace std;

// Variable created inside namespace
namespace my_namespace
{
	int val = 0xFF;
}

// Global variable
int val = 0xAA;

void show_global_var()
{
	cout << nouppercase << hex << "global's val: 0x" << val << '\n';
}

int main()
{
	// Local variable
	int val = 0xCC;

	cout << uppercase << hex << "my_namespace's val: 0x" << my_namespace::val << '\n';
	cout << nouppercase << hex << "local's val: 0x" << val << '\n';
	cout << uppercase << hex << "global's val: 0x" << ::val << '\n';
	show_global_var();

	return 0;
}

