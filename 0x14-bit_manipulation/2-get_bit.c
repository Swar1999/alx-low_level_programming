#include "main.h"
/**
 * get_bit - get bit value at given index
 * @n:number
 * @index:loction of bit
 * Return:value of the bit or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int num;
		if (n == 0 && index < 64)
			return (0);
		for (num = 0; num <= 63; n >>= 1, num++)
		{
			if (index == i)/*bit equal given value*/
				return (n & 1);
		}
		return (-1);/*didn't find the bit*/
}
