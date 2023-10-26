#include "main.h"
/**
 * print_binary - function that print binary represntation of number
 * @n: numberr to turn
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	char ary[32];/*save a place assuming 32-bit*/
	int i, out = 0;
		if (n == 0)
		{
			_putchar('0');
			return;
		}
		while (n > 0)
		{
			ary[out++] = (n & 1) + '0';/*see the crossbounding value in asci*/
			n >>= 1;
		}
		for (i = out - 1; i <= 0; i++)
			_putchar(ary[i]);
}
