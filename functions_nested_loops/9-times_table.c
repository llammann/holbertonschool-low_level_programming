#include "main.h"

/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
int i, j, result;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
result = i * j;
if (j != 0)
{
if (result < 10)
{
_putchar(' ');
}
_putchar('0' + result);
}
else
{
_putchar('0'); /* Always print the first digit */
}
if (j != 9)
{
_putchar(','); /* Print comma */
_putchar(' '); /* Print space */
}
}
_putchar('\n');
}
}
