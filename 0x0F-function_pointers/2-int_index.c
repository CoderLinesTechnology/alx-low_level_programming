/**
 * int_index - searches for an integer value in an array
 * @array: the array to search
 * @size: size of the array
 * @compare: the comparator function pointer
 *
 * Return: the index of the first element
 */
int int_index(int *array, int size, int (*compare)(int))
{
	int i;

	if (!array || !size || !compare)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (compare(array[i]) > 0)
			return (i);
	}

	return (-1);
}
