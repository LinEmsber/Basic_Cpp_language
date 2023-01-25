// constexpr - specifies that the value of a variable or function can appear in constant expressions 

#include <iostream>

constexpr double square(double n) { return n * n;}

int main()
{
	const int dmv = 17; // dmv is a named constant
	int var = 17; // var is not a constant

	constexpr double max1 = 1.4 * square(dmv); // OK if square(17) is a constant expression
//	constexpr double max2 = 1.4 * square(var); // error : var is not a constant expression
	const double max3 = 1.4 * square(var); // OK, may be evaluated at run time

	return 0;
}
