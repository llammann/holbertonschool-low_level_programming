#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a linked list
 * @h: Pointer to the head of the linked list
 * Description:print list
 * Return: The number of nodes in the linked list
 */

size_t print_list(const list_t *h)
{
const list_t *current = h;
size_t count = 0;
while (current != NULL)
{
if (current->str != NULL)
printf("[%d] %s\n", current->len, current->str);
else
printf("[0] (nil)\n");
count++;
current = current->next;
}
return (count);
}
