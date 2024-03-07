#include "main.h"

/**
 * _strstr - return matching str
 * @haystack: the string to search within
 * @needle: the substring to search for
 *
 * Return: haystack or NULL
 */
char *_strstr(char *haystack, char *needle)
{
if (*needle == '\0')
return (haystack);
while (*haystack != '\0')
{
char *h = haystack;
char *n = needle;
while (*n != '\0' && *h == *n)
{
h++;
n++;
}
if (*n == '\0')
return (haystack);
haystack++;
}
return (NULL);
}
