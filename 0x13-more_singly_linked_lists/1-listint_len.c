#include "lists.h"

/**
 * listint_len - returns the numer of elements in a linked list
 * @h: the first element of the linked list
 * Return: the number of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
	int num;

	if (h == NULL)
		return (0);
	for (num = 0; h; num++)
		h = h->next;
	return (num);
}
