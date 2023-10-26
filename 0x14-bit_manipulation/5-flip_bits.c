#include "main.h"
/**
 * flip_bits - returns the number of bits would need to flip number
 * @n: number 1
 * @m: number 2
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num = n ^ m;/*XOR*/
	int counter = 0;/*to count number of bits*/
		while (num != 0)
		{
			counter += num & 1;
			num >>= 1;/*right shifting*/
			num++;
		}
		return (counter);
}
