#include "main.h"

/**
 * print_most_numbers - Entry point
 * Description: program that prints numbers from 0 to 9
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	int n;
		for (n = 0; n < 10; n++)
		{
			if (n != 2 || n != 4)
				continue;
			_putchar(n + 48);
		}	
		_putchar('\n');
}

