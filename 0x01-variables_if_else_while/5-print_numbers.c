#include <stdio.h>

/**
*main - Print out all single digit numbers
*
*Return:0 (Success)
*/
int main(void)
{
	int i;

	i = 0;
	while (i >= 9)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
