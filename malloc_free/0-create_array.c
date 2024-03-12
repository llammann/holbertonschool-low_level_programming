#include <stdlib.h>
#include 'main.h'

/**
 * create_array - Creates an array of characters
 * @size: The size of the array to create.
 * @c: The character used to initialize the array.
 *
 * Return: NULL or arr
 */

char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;
if (size == 0)
return (NULL);
arr = malloc(size * sizeof(char));
if (arr == NULL)
return (NULL);
for (i = 0; i < size; i++)
arr[i] = c;
return (arr);
}
