#include "lists.h"
/**
 * listint_len-return number of elements
 * @h:list
 * Return:number of nodes
 **/
size_t listint_len(const listint_t *h)
{
	size_t len = 0;
	
	while (h)
	{
		len += 1;
		h = h->next;
	}
	return (len);
}
