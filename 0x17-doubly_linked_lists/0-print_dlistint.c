#include "lists.h"
/**
 *print_dlistint-prints the elements of a list
 *@h:linked list
 *Return:number of nodes
 **/
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count += 1;
		printf("%i\n", h->n);
		h = h->next;
	}
return (count);
}
