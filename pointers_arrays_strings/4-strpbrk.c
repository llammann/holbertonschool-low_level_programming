#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to be searched
 * @accept: the string containing the characters to search for
 *
 * Return: s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0' && s[i] != '\0'; j++)
{
if (s[i] == accept[j])
return (s);
}
}
return (NULL);
}
