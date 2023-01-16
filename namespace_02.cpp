/* The variables are defined on the different namespaces. */

#include <iostream>

using namespace std;

// Global variable
int val = 0xAA;

int main()
{
	// Local variable
	int val = 0xCC;

	cout << nouppercase << hex << "local's val: 0x" << val << '\n';
	cout << uppercase << hex << "global's val: 0x" << ::val << '\n';

	return 0;
}

