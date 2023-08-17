#include "main.h"

/**
 * more_numbers - Entry point
 * Description: program that prints 10 times numbers
 * from 0 to 14
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int n;
	int i;
		while (i <= 10)
		{
			while (n >= 0 && n <= 14)
			{
				_putchar(n + 48);
				n++
			}
			_putchar('\n');
			i++;
		}
}




