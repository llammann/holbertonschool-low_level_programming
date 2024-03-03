#include <stddef.h>

/**
 * _strncpy - Copies a string up to n bytes.
 * @dest: The destination buffer to copy the string into.
 * @src: The source string to copy from.
 * @n: The maximum number of bytes to copy.
 *
 * Return: A pointer to the destination string `dest`.
 */
char *_strncpy(char *dest, const char *src, int n)
{
char *ptr = dest;
int i;
for (i = 0; i < n && *src != '\0'; i++)
{
*ptr++ = *src++;
}
for (; i < n; i++)
{
*ptr++ = '\0';
}
return (dest);
}
