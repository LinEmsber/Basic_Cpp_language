#include <iostream>

uint64_t fibonacci(int n)
{
	return (n <= 1) ? n : fibonacci(n-1) + fibonacci(n-2);
}

int main ()
{
	// value of res is computed at compile time.
	uint64_t res = fibonacci(34);
	std::cout << res;
	return 0;
}
