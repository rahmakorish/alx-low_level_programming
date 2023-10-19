#include "lists.h"
/**
 * list_len-returns number of nodes in linked list
 * @h:input
 * Return:number of nodes
 **/
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = NULL;

	ptr = h;
	if (h == NULL)
	{
	count = 0;
	return (count);
	}
	while (ptr != NULL)
	{
	count += 1;
	ptr = ptr->next;
	}
	return (count);
}
