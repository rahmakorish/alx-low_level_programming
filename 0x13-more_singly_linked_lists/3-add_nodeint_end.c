#include "lists.h"
/**
 * add_nodeint_end-add node to end of list
 * @head:list
 * @n:data 
 * Return:adress of new element
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *ptr = *head;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{return (NULL);
	}
	if (n)
	{
		temp->n = n;
		if (!temp->n)
		{
			free(temp);
			return(NULL);
		}
	}
	if(ptr)
	{
		while (ptr->next != NULL)
		{
		ptr = ptr->next;
		}
		ptr->next = temp;
	}
	else
		*head = temp;
	return (temp);
}
