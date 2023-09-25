#include "lists.h"
/**
 * listint_len - function that return number of elements
 * @h : struct paramter
 * Return: number of elements;
 */
size_t listint_len(const listint_t *h)
{
	unsigned int counter;
		while (h)
		{
			counter++;
			h = h->next;
		}
		return (counter);
}
