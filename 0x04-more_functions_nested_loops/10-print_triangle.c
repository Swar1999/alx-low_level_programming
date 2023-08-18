#include "main.h"

/**
 * print_triangle - Entry point
 * Description: program that prints a traingel
 * @size : paramter
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
	int line1, line2;
		if (size <= 0)
			_putchar('\n');
		else
		{
			for (line1 = 1; line1 <= size; line1++)
			{
				for (line2 = 1; line2 <= size; line2++)
				{
					if ((line1 + line2) <= size)
						_putchar(' ');
					else
						_putchar('#');
				}
				putchar('\n');
			}
		}
}
