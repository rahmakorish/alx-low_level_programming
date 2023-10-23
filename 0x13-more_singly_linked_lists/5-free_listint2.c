#include "lists.h"
/**
 * free_listint2-frees a list
 * @head:list
 **/
void free_listint2(listint_t **head)
{
	listint_t *ptr, *temp;

	if (!head)
		return;
	ptr = *head;
	while (ptr)
	{
		temp = ptr;
		ptr = ptr->next;
		free(temp);
	}
	*head = NULL;
}
