#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end-adds a new node to end of list
 * @head:input list
 * @str:node insert
 * Return:adress of new node
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	char *copy = strdup(str);
	list_t *ptr = *head;
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{return (NULL);
	}
	if (str != NULL)
	{
	temp->str = copy;
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->len = strlen(temp->str);
	}
	if (ptr != NULL)
	{
		while (ptr->next)
		{
			ptr = ptr->next;
		}
		ptr->next = temp;
	}
	else
	*head = temp;
	return (temp);
}
