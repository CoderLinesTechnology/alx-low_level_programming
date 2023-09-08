#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		printf("%s is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%s is zero\n", n);
	}
	else
	{
		printf("%s is negative\n", n);
	}
	return (0);
}
