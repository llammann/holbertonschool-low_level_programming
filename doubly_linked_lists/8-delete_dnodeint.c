#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at a given index double list
 * @head: Pointer to a pointer to the head of the list
 * @index: Index of the node to delete
 *
 * Return: 1 if succeeded, -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *current = *head;
if (*head == NULL)
return (-1);
if (index == 0)
{
dlistint_t *temp = *head;
*head = (*head)->next;
free(temp);
if (*head != NULL)
(*head)->prev = NULL;
return (1);
}
dlistint_t *prev = NULL;
while (current != NULL && i < index)
{
prev = current;
current = current->next;
i++;
}
if (current == NULL)
return (-1);
prev->next = current->next;
if (current->next != NULL)
current->next->prev = prev;
free(current);
return (1);
}
