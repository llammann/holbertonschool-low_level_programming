#include "main.h"
#include <stdio.h>

/**
 * _strchr - finding character
 *@s: pointer string
 *@c: character we must find
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
return (NULL);
}
