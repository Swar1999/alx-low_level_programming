#include "main.h"

/**
 * print_diagonal - Entry point
 * Description: program that prints diagonal line
 * @n : number
 * Return: Always 0 (Success)
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
				for (j = 1; j <= n; j++)
				{
					if (i == j)
						_putchar(92);
					else
						_putchar(' ');
				}
				_putchar('\n');
			}
		}
}
