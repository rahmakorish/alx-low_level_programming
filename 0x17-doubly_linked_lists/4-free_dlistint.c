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
	free(head);
	}
	else
	{
		while(temp->next != NULL)
		{
		head = temp->next;
		free(temp);
		temp = head;
		}
		
		free(head);
		free(temp);
	}
	free(temp);
	free(head);

}
