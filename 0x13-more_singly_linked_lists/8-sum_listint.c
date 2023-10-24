#include "lists.h"
#include <stdio.h>
/**
 * sum_listint - function that prints all data sum
 * @head : struct paramter
 * Return: sum of data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
		if (head == NULL)
			return (0);
		while (head)
		{
			sum += head->n;
			head = head->next;/*move to next node*/
		}
		return (sum);
}
