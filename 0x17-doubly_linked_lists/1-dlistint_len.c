#include "lists.h"
/**
 * dlistint_len-returns the number of elements
 * @h:linked list
 * Return:size or nodes
 **/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count += 1;
		h = h->next;
	}
return (count);
}
