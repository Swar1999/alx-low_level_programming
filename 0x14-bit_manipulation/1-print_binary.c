#include "main.h"
/**
 * print_binary - function that print binary represntation of number
 * @n: numberr to turn
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int i, out = 0;
	char ary[32];/*save place for bits*/
		if (n == 0)
		{
			_putchar('0');
			return;
		}
		while (n)
		{
			ary[out++] = (n & 1) + '0';/*add ascii value*/
			n >>= 1;/*rigth shifted to creat new space*/
		}
		for (i = out - 1; i >= 0; i--)
			_putchar(ary[i]);/*print each bit*/
}
