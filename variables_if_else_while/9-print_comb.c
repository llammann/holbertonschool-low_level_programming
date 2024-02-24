#include <stdio.h>

/**
*main-all cobinations
*Return:always 0
*Description:description
**/
int main(void)
{
int x;
for (x = 0; x < 10; x++)
{
putchar(x + '0');
if (x < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
