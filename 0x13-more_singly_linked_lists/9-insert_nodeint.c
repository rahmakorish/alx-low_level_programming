#include "lists.h"
/**
 *insert_nodeint_at_index-inserts a node at position
 *@head:start list
 *@idx:index of list
 *@n:data of node
 *Return:adress of node
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *ptr = *head;
	listint_t *cptr = *head;
	unsigned int count = 0;

	if (head == NULL || (*head) == NULL)
	return (NULL);
	while (cptr)
	{
		count += 1;
		cptr = cptr->next;
	}
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	if (!temp->n)
	{
		free(temp);
		return (NULL);
	}
	if (!idx)
	{
		temp->next = *head;
		*head = temp;
		return (temp);
	}
	else
	{
		while (idx != 1)
		{
		ptr = ptr->next;
		idx--;
		}
	temp->next = ptr->next;
	ptr->next = temp;
	}
	return (temp);
}
