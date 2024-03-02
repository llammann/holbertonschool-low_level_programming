#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
int i = 0, j = 0;
if (n <= 0)
{
_putchar('\n');
return;
}
for (; i < n; i++)
{
while (j < i)
{
_putchar(' ');
j++;
}
_putchar('\\');
_putchar('\n');
j = 0;
}
}
