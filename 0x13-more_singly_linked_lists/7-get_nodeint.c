#include "lists.h"
/**
 * get_nodeint_at_index-return nth node of list
 * @head:required list
 * @index:index of node
 * Return:node at index
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;
	listint_t *node = head;
	unsigned int count = 0;

	while (ptr)
	{
		count += 1;
		ptr = ptr->next;
	}
	if (index < count)
	{
		while (index != 0)
		{
			node = node->next;
			index--;
		}
	}
	else
	{
		return (NULL);
	}
	return (node);
}
