#include "lists.h"
/**
 *free_dlistint-frees a list
 *@head:start of list
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	/*temp = head;*/
	if (!temp || !head)
	{
		if (temp)
			free(temp);
	free(head);
	}
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
