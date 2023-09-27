#include "main.h"
/**
  * primeFinder - searches for if a number is prime
  *
  * @x: the number to check
  * @y: the numbers we'll go through
  *
  * Return: whether or not the number is a prime number
  */
int primeFinder(int x, int y)
{
	if (x <= 1 || x % y == 0)
		return (0);
	else if (x == y)
		return (1);
	else if (x > y)
		primeFinder(x, y + 1);

	return (1);
}

/**
  * is_prime_number - tells us if an integer is a prime number or not
  *
  * @n: the number to check
  *
  * Return: 0 if the number is not prime and 1 if it is
  */
int is_prime_number(int n)
{
	return (primeFinder(n, 2));
}
