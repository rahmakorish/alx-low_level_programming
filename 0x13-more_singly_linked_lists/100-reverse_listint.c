#include "lists.h"
/**
 *reverse_listint-reverses a list
 *@head:list inverted
 *Return:pointer to node
 **/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = NULL;
	listint_t *temp2 = NULL;

	if (!head || !(*head))
	return (NULL);

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
