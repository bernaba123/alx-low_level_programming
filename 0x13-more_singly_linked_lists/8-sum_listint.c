#include "lists.h"

/**
 * sum_listint - returns the sum of data in a linked list
 * @head: a pointer to the head struct in a linked list
 * Return: the sum of all the data in a linked list
 */
int sum_listint(listint_t *head)
{
	int ret = 0;

	if (head == NULL)
		return (0);
	for (ret = 0; head; ret += head->n, head = head->next)
		;
	return (ret);
}
