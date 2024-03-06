#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to be searched
 * @accept: the string containing the characters to match
 *
 * Return: return something
 */

unsigned int _strspn(char *s, char *accept)
{
int i, j;
int match = 0;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
match++;
break;
}
}
if (accept[j] == '\0')
{
return (match);
}
}
return (match);
}
