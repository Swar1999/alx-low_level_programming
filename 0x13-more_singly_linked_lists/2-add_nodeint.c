#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - function that adds node to the begging
 * @head : node pointer
 * @n : number to be added
 * Return: addresss of new node or null
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *h;/*declare new node*/
		h = malloc(sizeof(listint_t));/*initilize space for it*/
		if (!h)/*new node dosen,t exist*/
			return (NULL);
		h->n = n;
		h->next = (*head);
		(*head) = h; /*set the pointer to the new node*/
		return (*head);
}
