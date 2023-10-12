#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - Checks if a character is a digit.
 * @c: The character to be checked.
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */
int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * validate_input - Validates if a string contains only digits.
 * @str: The string to be validated.
 *
 * Return: 1 if the string contains only digits, 0 otherwise.
 */
int validate_input(char *str)
{
	while (*str)
	{
		if (!is_digit(*str))
		{
			printf("Error\n");
			exit(98);
		}
		str++;
	}
	return (1);
}

/**
 * multiply - Multiplies two positive numbers represented as strings.
 * @num1: The first number as a string.
 * @num2: The second number as a string.
 *
 * Return: The result of the multiplication.
 */
int multiply(char *num1, char *num2)
{
	int result = 0;

	while (*num1)
	{
		int digit1 = *num1 - '0';
		int temp_result = 0;
		char *temp_num2 = num2;
		int digit2;

		while (*temp_num2)
		{
			digit2 = *temp_num2 - '0';
			temp_result = temp_result * 10 + digit1 * digit2;
			temp_num2++;
		}

		result = result * 10 + temp_result;
		num1++;
	}
	return (result);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: The array of command-line arguments.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!validate_input(argv[1]) || !validate_input(argv[2]))
	{
		return (98);
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	int result = multiply(argv[1], argv[2]);

	printf("%d\n", result);

	return (0);
}

