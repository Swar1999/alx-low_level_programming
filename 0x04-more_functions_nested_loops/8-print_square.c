#include "main.h"

/**
 * print_square - Entry point
 * Description: program that prints square
 * @size : paramter
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
	int row;
	int column;
		if (size <= 0)
			_putchar('\n');

	for (row = 1; row <= size; row++)
	{
		for (column = 1; column <= size; column++)
			_putchar('#');
		_putchar('\n');
	}
}
