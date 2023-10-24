#include "lists.h"
/**
 * pop_listint-delets first node
 * @head:list
 * Return:head of node
 **/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (head == NULL || (*head) == NULL)
	{
		return (0);
	}
	temp = (*head)->next;
	num = (*head)->n;
	/*return ((temp)->n);*/
	free(*head);
	*head = temp;
	return (num);
}
