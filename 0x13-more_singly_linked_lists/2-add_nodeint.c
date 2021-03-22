#include "lists.h"

/**
 * add_nodeint - adds node to the beginning of a linked list
 * @head: the pointer to the pointer to the beginning of the linked list
 * @n: the number to integrate into the new node
 * Return: a pointer to the newly made node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
