#include "lists.h"
#include <stdlib.h>
/**
 *free_list-frees a list_t
 *@head:input list
 *Return:0success
 **/
void free_list(list_t *head)
{
	list_t *temp = head, *ptr;

	if (head == NULL)
	{
		free(head);
		exit(0);
	}
	while (temp)
	{
		ptr = temp->next;
		free(temp->next);
		free(temp);
		temp = ptr;
	}

}
