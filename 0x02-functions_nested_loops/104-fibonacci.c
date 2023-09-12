#include <stdio.h>

/**
* print_large_number - Prints a large number that 
* @high: The high part of the number (divided by 1 billion).
* @low: The low part of the number (modulo 1 billion).
*/
void print_large_num(unsigned long high, unsigned long low)
{
	if (high > 0)
		printf("%lu%lu", high, low);
	else
		printf("%lu", low);
}

/**
 * main - printing first 98 fibonacci sequence
 * Return: 0
 */
int main(void)
{
	unsigned long int current = 1;
	unsigned long int next = 2;
	int i;

	printf("%lu, ", current);

	for (i = 2; i < 98; i++)
	{
		print_large_num(0, next);
		if (i < 97)
			printf(", ");
		next += current;
		current = next - current;
	}
	printf("\n");

	return (0);
}
