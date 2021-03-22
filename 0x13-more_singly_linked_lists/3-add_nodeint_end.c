#include "lists.h"

/**
 * add_nodeint_end - add a new node to the end of the linked list
 * @head: a pointer to a pointer to the head structure in the linked list
 * @n: the number to integrate into the new  node of the linked list
 * Return: the address of the new element in the linked list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		for (temp = *head; temp->next; temp = temp->next)
			;
		temp->next = new;
	}
	return (new);
}
