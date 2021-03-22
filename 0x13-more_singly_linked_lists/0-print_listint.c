#include "lists.h"

/**
 * print_listint - prints the elements of a linked list of structures
 * @h: the pointer to the first element of the list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int num;

	if (h == NULL)
		return (0);
	for (num = 0; h; num++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (num);
}
