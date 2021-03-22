#include "lists.h"

/**
 * print_listint_safe - prints the elements of a linked list of structures
 * @head: the pointer to the first element of the list
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	int pdiff, count, a;

	if (head == NULL)
		return (0);
	for (count = 0; head; count++)
	{
		pdiff = head - head->next;
		printf("[%p] %d\n", (void *)head, head->n);
		if (pdiff > 0)
			head = head->next;
		else
		{
			a = (head->next)->n;
			printf("-> [%p] %d\n", (void *)head->next, a);
			count++;
			break;
		}
	}
	return (count);
}
