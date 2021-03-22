#include "lists.h"

/**
 * find_listint_loop - finds a loop in a linked list
 * @head: the pointer to the first element of the list
 * Return: a pointer to the node where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	int pdiff;

	if (head == NULL)
		return (NULL);
	for (; head;)
	{
		pdiff = head - head->next;
		if (head->next == NULL)
			pdiff = (long int)head;
		if (pdiff > 0)
			head = head->next;
		else
			return (head->next);
	}
	return (NULL);
}
