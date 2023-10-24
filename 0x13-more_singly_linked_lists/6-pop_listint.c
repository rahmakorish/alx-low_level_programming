#include "lists.h"
/**
 * pop_listint-delets first node
 * @head:list
 * Return:head of node
 **/
int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
	temp = *head;
	*head = (*head)->next;
	}
	return ((temp)->n);
	free(temp);
	temp = NULL;
}
