#include "main.h"

/**
 * _pow_recursion - Calculates pow
 * @x: The base value.
 * @y: The exponent value.
 * Return: -1 or 1 or x or result
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
if (y == 1)
{
return (x);
}
return (x * _pow_recursion(x, y - 1));
}
