#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The starting number
 */
void print_to_98(int n)
{
int step = (n <= 98) ? 1 : -1;
for (; n != 98 + step; n += step)
{
printf("%d", n);
if (n != 98)
printf(", ");
}
printf("\n");
}
