#include "lists.h"
/**
 *get_dnodeint_at_index-retrurns the nth node
 *@head:start of linked list
 *@index:required node
 *Return:node
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));
	size_t count = 0, i;

	temp = head;
	if (!head || !temp)
	{
		if (temp)
			free(temp);
		return (NULL);
	}
	while (head != NULL)
	{
		count += 1;
		head = head->next;
	}
	/*for (i = 0; i < count; i++)
	{
		if (i == index)
			printf("in");
	}*/
	(void) i; (void) index;
return (temp);
}
