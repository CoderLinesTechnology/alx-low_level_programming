#include <stdlib.h>

/**
 * malloc_checked - check if malloc propoerly works
 * @b: first param
 *
 * Return: a ponter to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *prt;

	prt = malloc(sizeof(b));
	if (prt == NULL)
		exit(98);

	return (prt);
}
