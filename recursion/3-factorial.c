#include "main.h"

/**
 * factorial - Calculates the factorial of a given number recursively.
 * @n: The number for which factorial is to be calculated.
 * Return: The factorial of n. -1 or 1 or fac
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
