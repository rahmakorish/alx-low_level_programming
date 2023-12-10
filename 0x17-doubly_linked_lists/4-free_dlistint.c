#include "lists.h"
/**
 *free_dlistint-frees a list
 *@head:start of list
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	temp = head;
	if (!temp || !head)
	{
		if (temp)
			free(temp);
	free(head);
	}
	else
	{
	while(temp->next != NULL && temp->prev == NULL)
	{
		head = temp->next;
		free(temp);
		temp = head;
		head->prev = NULL;
	}
	free(head);
        free(temp);
	}
	free(head);
        free(temp);
}	
