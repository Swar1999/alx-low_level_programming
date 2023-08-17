#include "main.h"

/**
 * print_line - Entry point
 * Description: program that prints line
 * @n : number of -
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	for (n = 1; n <= 10; n++)
	{
		_putchar('_');
		_putchar('\n');
	}
}




