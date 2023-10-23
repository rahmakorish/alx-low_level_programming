#include "lists.h"
/**
 * free_listint-frees a listint_t
 * @head:start of list
 **/
void free_listint(listint_t *head)
{
	listint_t *ptr = head;

	while (ptr)
	{
		head = head->next;
	/*	free(ptr->n);*/
		free(ptr);
		ptr = head;
	}
}
