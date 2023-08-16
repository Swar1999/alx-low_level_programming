#include "main.h"

/**
 *  print_last_digit - Entry point
 * Description: program that prints the last digit
 * @n : the number
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int m;
	if (n < 0)
		m = -1 * ( n % 10);
	else
		m = n % 10;
	_putchar(m + '0');
	return (m);
}

