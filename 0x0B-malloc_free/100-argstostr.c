#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: Number of arguments
 * @av: Array of arguments
 *
 * Return: A pointer to a new string containing concatenated arguments
 */
char *argstostr(int ac, char **av)
{
	int i, j, total_length = 0;
	int newline_count = ac - 1;
	char *concatenated_args, *ptr;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j] != '\0'; j++)
			total_length++;

	concatenated_args = (char *)malloc(total_length + newline_count + 1);

	if (concatenated_args == NULL)
		return (NULL);

	ptr = concatenated_args;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			*ptr++ = av[i][j];

		if (i < ac - 1)
			*ptr++ = '\n';
	}

	*ptr = '\0';

	return (concatenated_args);
}

