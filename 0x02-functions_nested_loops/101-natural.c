#include <stdio.h>

/**
 * sum_3_5_multiples - compute the sum of all the multiples 3 or 5
 *
 * @num: range
 * Return: sum
 */
int sum_3_5_multiples(int num)
{
	int i, sum;

	for (i = 0, sum = 0; i < num; i++)
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
	return (sum);
}
