#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * delete_nodeint_at_index - detete a sertin node
 * @head: pointer
 * @index: the node index
 * Return:1 if success and -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *swp = *head;
	listint_t *node;/* to be deleted*/
	unsigned int i;
		if (*head == NULL)
			return (-1);
		if (index == 0)
		{
			*head = (*head)->next;
			free(swp);
			return (1);
		}
		/*find the privous node of the node that need to be deleted*/
		for (i = 0; swp != NULL && i < index - 1; i++)
		{
			swp = swp->next;
		}
		if (!swp || !swp->next)/*no privous or next node*/
			return (-1);
		node = swp->next->next;/*move the pointer from the node to be deleted*/
		free(swp->next);
		swp->next = node;/*make it points to null*/
		return (1);
}
