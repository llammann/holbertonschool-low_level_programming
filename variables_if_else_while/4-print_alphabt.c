#include <stdio.h>

/**
 *main-all alphabet letters except q,e
 *Description: function
 *Return: always 0
 **/
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'e' && letter != 'q')
{
putchar(letter);
}
}
putchar('\n');
return (0);
}
