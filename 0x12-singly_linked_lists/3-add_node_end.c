#include "lists.h"

/**
 * add_node_end - add a new node at the end of the linked list
 * @head: a pointer to a pointer to the head struct fed in
 * @str: the str fed in to add to the newly appended struct
 * Return: a pointer to the first struct in the new linked list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	int len;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	for (len = 0; str[len]; len++)
		;
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;
	if ((*head) == NULL)
		(*head) = new;
	else
	{
		temp = *head;
		for (; temp->next;)
			temp = temp->next;
		temp->next = new;
	}
	return (new);
}
