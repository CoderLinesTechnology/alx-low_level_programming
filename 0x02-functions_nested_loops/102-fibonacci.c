#include <stdio.h>

void print_fibonacci(size_t);

/**
 * main - driver code
 * Return: 0
 */
int main(void) {
    printFibonacci(50);
    return 0;
}

/**
 * print_fibonacci - print the n fibonacci number
 * @n: range
 */
void printFibonacci(int n)
{
	if (n <= 0)
 		return;

	unsigned long long fib_x = 1, fib_y = 2, fib_i;

	if (n >= 1)
		printf("%llu", fib_x);

	if (n >= 2)
		printf(", %llu", fib_y);

	for (int i = 3; i <= n; i++)
	{
		fib_i = fib_x + fib_y;
		printf(", %llu", fib_i);
		fib_x = fib_y;
		fib_y = fib_i;
	}

	printf("\n");
}
