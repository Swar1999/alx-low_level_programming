#include "main.h"
/**
 * print_binary - function that print binary represntation of number
 * @n: numberr to turn
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
		if (n == 0)
		{
			_putchar('0');
			return;
		}
		if (n > 0)
		{
			print_binary(n >> 1);/*recursion to right sided*/
			_putchar((n & 1) + '0');/*convert using asci table*/
		}
}
