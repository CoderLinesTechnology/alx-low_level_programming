#include <stdio.h>

/**
*main - Print the number of arguments passed
*@argc: argument count
*@argv: argument variable
*
*Return: Success
*/

int main(int argc, char *argv[])
{
	int i;

	if ( argc == 3)
	{
		i = 0;
		i = argv[1] * argv [2];
		printf("%d\n", 1);
	}
	else
		puts("Error");
	return (0);
}
