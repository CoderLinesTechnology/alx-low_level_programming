/**
 * is_divisible - Helper function to
 * check if n is divisible by any integer from a to b.
 * @n: The integer to be checked for divisibility.
 * @a: The starting integer for the range.
 * @b: The ending integer for the range.
 *
 * Return: 1 if n is divisible by any integer in the range, 0 otherwise.
 */
int is_divisible(int n, int a, int b)
{
	if (a > b)
		return (0);

	if (n % a == 0)
		return (1);

	return (is_divisible(n, a + 1, b));
}

/**
 * is_prime_number - Checks if an integer is a prime number using recursion.
 * @n: The integer to be checked.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);

	if (is_divisible(n, 2, (int)sqrt(n)) == 1)
		return (0);

	return (1);
}
