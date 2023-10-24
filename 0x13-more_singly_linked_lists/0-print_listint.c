#include <stdio.h>
#include "lists.h"
/**
 * print_listint - function that prints all list elements
 * @h:struct paramter
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	unsigned int counter = 0;/* to count elements*/
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;/*move to next node*/
			counter++;
		}
		return (counter);
}
