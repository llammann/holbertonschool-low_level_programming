#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n)
 * @head: Pointer to the head of the linked list
 *
 * Return: Sum of all the data (n) of the linked list
 */

int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *current = head;
while (current != NULL)
{
sum += current->n;
current = current->next;
}
return (sum);
}
