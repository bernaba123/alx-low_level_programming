#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: a pointer to a pointer to the head struct of a linked list
 * Return: the data of the head node deleted
 */
int pop_listint(listint_t **head)
{
	int ret;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	ret = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (ret);
}
