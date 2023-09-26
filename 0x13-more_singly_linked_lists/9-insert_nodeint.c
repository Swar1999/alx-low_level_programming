#include "lists.h"
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
	unsigned int i, j = 0;
	listint_t *swp = *head;
	listint_t *newnode;
		newnode = malloc(sizeof(listint_t));
		if (newnode == NULL)
			return (NULL);
		if (*head != NULL)
		{
			*head = (*head)->next;
			j++;/*read the hole list*/
		}
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
		for (i = 0; i < idx ; i++)
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

