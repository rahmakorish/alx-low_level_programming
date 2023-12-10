#include "lists.h"
/**
 * add_dnodeint_end-adds a new node at the end of a dlistint_t list.
 * @head:start of list
 * @n:new data
 * Return:address of new element
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (!head || !new)
	{
		if (new)
			free(new);
		return (NULL);
	}
	temp = *head;
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
	}
	else if (*head != NULL)
	{
		while ((temp)->next != NULL)
		{
			temp = (temp)->next;
		}
		temp->next = new;
		new->prev = temp;
		new->next = NULL;
	}
	return (*head);
}
