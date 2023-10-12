#include "main.h"

/**
 * my_memset - Sets memory bytes to a specific value.
 * @ptr: Pointer to the memory block.
 * @value: Value to set the memory to.
 * @num: Number of bytes to set.
 *
 * Return: Pointer to the memory block.
 */
void *my_memset(void *ptr, int value, unsigned int num)
{
	unsigned char *p;
	unsigned int i;

	if (ptr == 0 || num <= 0)
		return (ptr);

	p = ptr;
	for (i = 0; i < num; ++i)
		p[i] = (unsigned char)value;

	return (ptr);
}


/**
*_calloc - check if malloc propoerly works
*@nmemb: memory byte
*@size: size of the allocation
* Return: a ponter to the allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *prt;

	if (nmemb == 0 || size == 0)
		return (NULL);
	prt = malloc(nmemb * size);
	if (prt ==  NULL)
		return (NULL);

	my_memset(prt, 0, nmemb * size);
	return (prt);
}
