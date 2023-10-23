#include "lists.h"
/**
 * add_nodeint-adds new node at beginning
 * @head:list
 * @n:new elemnt
 * Return:address of new element
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t **ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while(ptr)
	{
		ptr->n = n;
		ptr = ptr->next;
	}
	head = ptr;
}
