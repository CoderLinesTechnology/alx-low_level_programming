#include <stdio.h>

/**
*main - Print the number of arguments passed
*@argc: argument count
*@argv: argument variable
*
*Return: Success
*/

int main(int argc, char *argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%d\n", argv[i]);
	return (0);
}
