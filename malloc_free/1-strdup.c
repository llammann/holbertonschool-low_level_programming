#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           containing a copy of the string given as parameter.
 * @str: The string to duplicate.
 *
 * Return: NULL or copy
 */
char *_strdup(char *str)
{
char *duplicate;
unsigned int length = 0;
unsigned int i;
if (str == NULL)
return (NULL);
while (str[length] != '\0')
length++;
duplicate = malloc((length + 1) * sizeof(char));
if (duplicate == NULL)
return (NULL);
for (i = 0; i <= length; i++)
duplicate[i] = str[i];
return (duplicate);
}
