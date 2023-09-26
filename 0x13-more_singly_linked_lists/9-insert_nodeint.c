#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_nodeint_at_index - function to add new node at some index
 * @head: pointer to the node
 * @idx: index to be the node inserted
 * @n: data of node
 * Return: the address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	int i;
	listint_t *swp = *head;
	listint_t *newnode;
		newnode = malloc(sizeof(listint_t));
		if (!newnode || !*head)
			return (NULL);
		newnode->n = n;
		newnode->next = NULL; /*insert the new node at the end*/
		/*case one*/
		if (idx == 0)/*at the begining*/
		{
			newnode->next = *head;
			*head = newnode;/*switch pointers*/
			return (newnode);
		}
		/*case two*/
		for (i = 0; i < idx && swp; i++)
		{
			if (i == idx - 1)/*counter starts from 0*/
			{
				newnode->next = swp->next;
				swp->next = newnode;
				return (newnode);
			}
			else
			{
				swp = swp->next;
			}
			return (NULL);/*insertion in the idx failed*/
		}
}

