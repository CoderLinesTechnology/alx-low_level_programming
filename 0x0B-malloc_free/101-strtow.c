#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * strtow - Splits a string into words.
 * @str: Input string.
 *
 * Return: Pointer to an array of strings (words), NULL on failure.
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, word_count;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			word_count++;
	}

	if (word_count == 0)
		return (NULL);

	words = (char **)malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0, k = 0; i < word_count; i++)
	{
		while (str[k] == ' ')
			k++;

		len = 0;
		while (str[k + len] != ' ' && str[k + len] != '\0')
			len++;

		words[i] = (char *)malloc((len + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}

		for (j = 0; j < len; j++)
			words[i][j] = str[k + j];
		words[i][j] = '\0';

		k += len;
	}

	words[word_count] = NULL;
	return (words);
}

