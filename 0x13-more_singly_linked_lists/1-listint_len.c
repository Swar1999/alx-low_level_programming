#include "lists.h"
/**
 * listint_len - function that gives the length of list
 * @h : struct paramter
 * Return: number of elements;
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;
		while (h)
		{
			counter++;
			h = h->next;/*move to next node*/
		}
		return (counter);
}
