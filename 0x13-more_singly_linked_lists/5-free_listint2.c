#include "lists.h"

/**
 * free_listint2 - frees a linked list and sets head to NULL
 * @head: a pointer to a pointer to the head struct of the linked list
 * Return: No Value
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return;
	for (; *head;)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
