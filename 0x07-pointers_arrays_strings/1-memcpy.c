#include "main.h"

/**
 * _memcpy - Copy the number of bytes
 *@dest: destination parameter
 *@src: source parameter
 *@n: number of bytes
 *
 *Return: string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x;

	for (x = 0; x < n; x++)
		*(dest + x) = *(src + x)
	return (dest);
}
