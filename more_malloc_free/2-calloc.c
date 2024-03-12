#include <stdlib.h>
#include <string.h>
/**
 *_calloc- allocates memory for an array
 *Return: ptr or NULL
 *@nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
*Description: allocates memory for an array
**/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int i;
size_t total_size;
if (nmemb == 0 || size == 0)
return (NULL);
total_size = nmemb * size;
ptr = malloc(total_size);
if (ptr == NULL)
return (NULL);
for (i = 0; i < total_size; i++)
ptr[i] = 0;
return (ptr);
}
