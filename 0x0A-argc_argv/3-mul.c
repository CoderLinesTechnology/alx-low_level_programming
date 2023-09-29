#include <stdio.h>
#include <stdlib.h>

/**
*main - Print the number of arguments passed
*@argc: argument count
*@argv: argument variable
*
*Return: Success
*/

int main(int argc, char *argv[])
{
	int i = 0;

	if (argc == 3)
	{
		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", i);
	}
	else
		puts("Error");
	return (0);
}
