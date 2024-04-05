#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - A singly linked list node
 * @str: String stored in the node
 * @len: Length of the string
 * @next: Pointer to the next node
 */

typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif
