#include "lists.h"
/**
 * add_dnodeint-adds a new node at the beginning
 * @head:start of list
 * @n:data inserted
 * Return:address of new element
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (!head || !temp)
	{
		if (temp)
		free(temp);
		return (NULL);
	}

	temp->prev = NULL;
	temp->n = n;
	if (!*head)
	{
		*head = temp;
		temp->next = NULL;
	}
	else
	{
	temp->next = *head;
	(*head)->prev = temp;
	*head = temp;
	}
return (temp);
}
