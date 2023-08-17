#include "main.h"

/**
 * print_line - Entry point
 * Description: program that prints line
 * @n : number of -
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int j;
		if (n <= 0)
			_putchar('\n');
		else
		{
			for (j = 1; j <= n; j++)
				_putchar('_');
			_putchar('\n');
		}
}




