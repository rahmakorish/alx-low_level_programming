#include "lists.h"
#include "string.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * print_list-prints all elements of a list
 * @h:inputted list
 * Return:number of nodes
 **/
size_t print_list(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
	if (h->str == NULL)
	{
	printf("[0] (nil)\n");
	len += 1;
	h = h->next;
	}
	printf("[%ld] %s\n", strlen(h->str), h->str);
	len += 1;
	h = h->next;
	}
	return (len);
}
