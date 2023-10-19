#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node-adds node to beginning of list
 * @head:start of list
 * @str:data inserted
 * Return:address of new element
 **/
list_t *add_node(list_t **head, const char *str)
{
	char *copy = strdup(str);
	list_t *ptr = malloc(sizeof(list_t));

	if (ptr == NULL || head == NULL)
	{
		return (NULL);
	}
	ptr->str = copy;

	if (ptr->str == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
