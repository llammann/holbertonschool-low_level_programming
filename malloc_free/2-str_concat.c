#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: Pointer to a newly allocated space in memory containing the
 *         concatenated string, or NULL if allocation fails.
 */
char *str_concat(char *s1, char *s2)
{
char *concatenated;
int length_s1 = 0, length_s2 = 0, i, j;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[length_s1])
length_s1++;
while (s2[length_s2])
length_s2++;
concatenated = malloc((length_s1 + length_s2 + 1) * sizeof(char));
if (concatenated == NULL)
return (NULL);
for (i = 0; i < length_s1; i++)
concatenated[i] = s1[i];
for (j = 0; j < length_s2; j++)
concatenated[length_s1 + j] = s2[j];
concatenated[length_s1 + length_s2] = '\0';
return (concatenated);
}
