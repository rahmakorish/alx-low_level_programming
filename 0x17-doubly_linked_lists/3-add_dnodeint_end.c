#include "lists.h"
/**
 * add_dnodeint_end-adds a new node at the end of a dlistint_t list.
 * @head:start of list
 * @n:new data
 * Return:address of new element
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	if (!head)
		return (NULL);
	while (head != NULL)
	{
		if (head->next == NULL)
		{	
			printf("last %i\n",n);
			head = head->next;
		}

	}
	return (*head);
}
