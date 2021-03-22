#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: a pointer to the beginning struct of the linked list
 * @index: the index of the node to be returned
 * Return: the pointer the number index structure of the linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; head && (i < index); head = head->next, i++)
		;
	if (head == NULL)
		return (NULL);
	return (head);
}
