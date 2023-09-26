#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - function that detete the
 * head node
 * @head : pointer
 * Return: the head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *swp;
		if (*head == NULL)
			return (0);
		swp = *head;
		*head = (*head)->next;
		free(swp);
		return ((*head)->n);
}
