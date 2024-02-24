#include <stdio.h>

/**
 *main-displaying all numbers in 16 base
 *Return:always 0
 *Description:function that display all numbers in 16 base
 **/
int main(void)
{
char digit = '0';
while (digit <= '9')
{
putchar(digit);
digit++;
}
char letter = 'a';
while (letter <= 'f')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
