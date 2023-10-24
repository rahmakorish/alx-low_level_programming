#include "lists.h"
/**
 * delete_nodeint_at_index-deletes node of certain index
 * @head:list
 * @index:index needed
 * Return:1success
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;/* = *head;*/
	listint_t *previous; /*= *head;I*/

	if (head == NULL)
	{
		return (-1);
	}
	current = *head;
	previous = *head;
	while (index != 1)
	{
		previous = current;
		current = current->next;
		index--;
	}
	previous->next = current->next;
	free(current);
	current = NULL;
	return (1);
}
