#include "lists.h"
/**
 * free_listint2-frees a list
 * @head:list
 **/
void free_listint2(listint_t **head)
{
	listint_t *ptr = head;

	while(ptr)
	{
		head = head->next;
	/*	free(ptr->n);*/
		free(ptr);
		ptr = head;
	}
	head = NULL;
}
