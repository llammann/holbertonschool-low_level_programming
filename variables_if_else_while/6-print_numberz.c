#include <stdio.h>

/**
 *main-putchar digits without variable
 *Return:always 0
 *Description:description
 **/
int main(void)
{
int num = 0;
while (num < 10)
{
putchar(num + '0');
num++;
}
putchar('\n');
return (0);
}
