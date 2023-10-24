#include "lists.h"
/**
 *reverse_listint-reverses a list
 *@head:list inverted
 *Return:pointer to node
 **/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *temp2;

	if (!head || !(*head))
	return (NULL);
	temp2 = NULL;
	temp = NULL;

	while (head != NULL)
	{
		temp2 = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = temp2;
	}
	*head = temp;
	return (*head);
}
