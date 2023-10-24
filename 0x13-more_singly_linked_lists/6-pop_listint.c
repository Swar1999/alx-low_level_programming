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
	int data;
		if (*head == NULL)
			return (0);
		data = (*head)->n;
		swp = *head;
		*head = (*head)->next;
		free(swp);
		return (data);
}
