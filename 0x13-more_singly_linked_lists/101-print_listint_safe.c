#include "lists.h"
/**
 * print_listint_safe-prints list
 * @head:start of list
 * Return:number of nodes
 **/
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	listint_t *ptr = head;

	while (ptr)
	{
		count += 1;
		ptr = ptr->next;
	}

	return (count);
}
