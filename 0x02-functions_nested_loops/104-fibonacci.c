#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    unsigned long a = 1, b = 2, next;
    int count;

    printf("%lu, %lu, ", a, b);

    for (count = 3; count <= 98; ++count)
    {
        next = a + b;
        printf("%lu%s", next, (count == 98) ? "\n" : ", ");
        a = b;
        b = next;
    }

    return (0);
}
