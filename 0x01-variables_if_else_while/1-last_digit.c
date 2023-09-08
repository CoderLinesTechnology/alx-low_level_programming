#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Print the last digit in a number
*and check whether it is negative or positive
*
*Return: 0 (Success)
*/
int main(void)
{
	int n;
	int ldig;
	int neg;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	neg = n;
	if (n < 0)
	{
		neg = -n;
		ldig = neg % 10;
		ldig = -ldig;
	}
	else
		ldig = n % 10;
	printf("Last digit of %d is %d and is ", n, ldig);
	if (n < 0)
	{
		printf("less than 5\n");
	}
	else if (n == 0)
	{
		printf("0\n");
	}
	else
	{
		if (ldig > 5)
			printf("greater than 5\n");
		else
			printf("less than 6 and not 0\n");
	}
	return (0);
}
