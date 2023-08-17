#include "main.h"

/**
 * print_diagonal - Entry point
 * Description: program that prints diagonal line
 * @n : number
 */
void print_diagonal(int n)
{
	int j;
	int i;
		if (n <= 0)
			_putchar('\n');
		else
		{
			for (i = 1; i <= n; i++)
			{
				for (j = 1; j <= i; j++)
					_putchar(' ');
				_putchar(92);
				_putchar('\n');
			}
		}
}
