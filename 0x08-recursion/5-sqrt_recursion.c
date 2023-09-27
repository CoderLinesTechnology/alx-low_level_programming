#include "main.h"
/**
 * _sqrt_recursion - Returns the natural square root of a number using Newton-Raphson method
 * @n: The number for which to find the square root
 *
 * Return: The natural square root of the number, or -1 if no natural square root exists
 */

int _sqrt_recursion(int n)
{
    if (n < 0)
        return -1; /* Negative numbers don't have natural square roots */

    if (n == 0 || n == 1)
        return n; /* Square root of 0 or 1 is the number itself */

    double x0 = n; // Initial guess
    double x1 = 0.5 * (x0 + n / x0); // Newton-Raphson method formula

    if (x0 == x1) // Check for convergence
        return (int)x0;

    return _sqrt_recursion((int)x1); // Recursively call with the new guess
}
