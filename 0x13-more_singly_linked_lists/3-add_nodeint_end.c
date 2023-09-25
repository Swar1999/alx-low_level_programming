#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - function that adds node at the end
 * @head : pointer
 * @n : new node data
 * Return: the adderss of new node or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *h;
	listint_t *swp = *head;
		h = malloc(sizeof(listint_t));
		if (!h)
			return (NULL);
		h->n = n;
		h->next = NULL; /*the last node in the list*/
		if (*head == NULL)/*points to the last node*/
		{
			*head = h;
			return (h);
		}
		while (swp->next)/*swap the pointers*/
		{
			swp = swp->next;
			swp->next = h;
			return (h);
		}
}
