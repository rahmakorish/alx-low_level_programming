#include "lists.h"
/**
 *free_dlistint-frees a list
 *@head:start of list
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	temp = head;
	if (!temp || !head)
	{
		if (temp)
			free(temp);
		free(head);
	}
	else
	{
		while (head->next != NULL)
		{
			head = head->next;
			free(temp);
			temp = head;
		}
		free(head);
	}
}
