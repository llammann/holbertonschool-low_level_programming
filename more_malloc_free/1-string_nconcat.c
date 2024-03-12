#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings.
 *                  Allocates memory for the concatenated string.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: If the function fails, returns NULL.
 *         Otherwise, returns a pointer to the concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = 0, len2 = 0, i, j;
char *concat;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len1])
len1++;
while (s2[len2])
len2++;
concat = malloc((len1 + len2 + 1) * sizeof(char));
if (concat == NULL)
return (NULL);
for (i = 0; s1[i]; i++)
concat[i] = s1[i];
for (j = 0; s2[j] && j < n; j++)
concat[i++] = s2[j];
concat[i] = '\0';
return (concat);
}
