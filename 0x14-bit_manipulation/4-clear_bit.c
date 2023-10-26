#include "main.h"
/**
 * clear_bit -function that sets the value of a bit to 0 at a given index
 * @n:number
 * @index:ginen location
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num;
		if (index > 63)/*include more values*/
			return (-1);
		num = 1 << index; /*left shifted*/
		if (*n & num)/*to give 0*/
			*n = *n ^ num;
		return (1);
}
