#include <iostream>

int fib(int n)
// Recursively returns fibnoacci sequence for any number
{
	if (n == 0) // Base case: return 0
	{
		return 0;
	}
	if (n == 1) // Base case: return 1
	{
		return 1;
	}
	return fib(n - 1) + fib(n - 2); // F(n) = F(n-1) + F(n-2)
}

int main()
// Main program, calls upon fib function
{
	int num{ 10 }; // Change number here

	std::cout << fib(num);

	return 0;
}