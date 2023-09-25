#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - free list
 * @head : pointer
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *swp;
		if (head == NULL) /*already setup */
			return; /*return nothing*/
		while (*head)
		{
			swp = (*head)->next;/*let it points to next node*/
			free(*head);/*free space*/
			*head = swp;
		}
		*head = NULL;
}
