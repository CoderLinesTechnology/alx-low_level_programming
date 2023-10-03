#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string
 * @str: Input string
 *
 * Return: Number of words in the string
 */
int count_words(char *str)
{
	int count = 0;
	int is_word = 0;

	while (*str)
	{
		if (*str == ' ')
			is_word = 0;
		else if (is_word == 0)
		{
			is_word = 1;
			count++;
		}
		str++;
	}

	return (count);
}

/**
 * strtow - Splits a string into words
 * @str: Input string
 *
 * Return: Pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **words;
	int i, j, len, word_count, word_start;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);

	words = (char **)malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0, word_start = 0; i < word_count; i++)
	{
		while (str[word_start] == ' ')
			word_start++;

		len = 0;
		while (str[word_start + len] != ' ' && str[word_start + len] != '\0')
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
			words[i][j] = str[word_start + j];
		words[i][j] = '\0';

		word_start += len;
	}

	words[word_count] = NULL;
	return (words);
}

