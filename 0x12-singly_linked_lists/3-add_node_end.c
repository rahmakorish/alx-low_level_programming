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
	/*create temprory node*/
	list_t *temp;
	/*create copy of original node called ptr*/
	list_t *ptr = *head;
	/*allocate space for temp node*/
	temp = malloc(sizeof(list_t));
	/*free node if fail*/
	if (temp == NULL)
	{
		return (NULL);
	}
	/*fill temp node with data*/
	if (copy != NULL)
	{
	temp->str = copy;
	temp->next = NULL;
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	}

	/*iterate over copy original adresses*/
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;
	*head = ptr;
	return(*head);
}
