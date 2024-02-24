#include <stdio.h>
/**
 *main-reverse alphabet
 *Return:reverse alphabet in lowercase
 *Description:dispaying reverse alphabet
 **/
int main(void)
{
char letter = 'z';
while (letter >= 'a')
{
putchar(letter);
letter--;
}
putchar('\n');
return (0);
}
