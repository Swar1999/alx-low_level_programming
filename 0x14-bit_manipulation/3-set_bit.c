#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n:number
 * @index:given location
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num;
		if (index > 63)/*conitan more values*/
			return (-1);
		num = 1 << index;/*left shiting bits*/
		*n = (*n | num);/*using OR to give 1*/
		return (1);
}
