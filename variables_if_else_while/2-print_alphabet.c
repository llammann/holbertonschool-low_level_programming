#include <stdio.h>
/**
 *main-displaying alphabet function
 *Return: always 0
 *Description:alphabet game
 **/
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
