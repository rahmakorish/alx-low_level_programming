#include "lists.h"

/**
 * print_listint-prints elemnts of a list
 * @h:list printed
 * Return:number of nodes
 **/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr = h;

	while (ptr)
	{
		count += 1;
		printf("%i\n", ptr->n);
		ptr = ptr->next;
	}
	return (count);
}
