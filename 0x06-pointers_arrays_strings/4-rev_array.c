#include "main.h"

/**
*reverse_array - Function to reverse the element of an array
*@a: array
*@n: array size
*
*/

void reverse_array(int *a, int n)
{
	int temp, i = 0;

	while (i < n)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;

		i++;
		n--;
	}
}
