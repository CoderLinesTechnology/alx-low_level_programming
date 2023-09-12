#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */


int main(void) {
    unsigned long long a = 1, b = 2, next;
    int count;

    printf("1, 2, ");

    for (count = 3; count <= 98; ++count) {
        next = a + b;
        printf("%llu", next);

        if (count < 98)
            printf(", ");

        a = b;
        b = next;
    }

    printf("\n");

    return 0;
}

