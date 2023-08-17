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
	int j;
		for (i = 1; i <= 10; i++)
		{
			for (n = 0; n <= 14; n++)
			{
				j = n;
				if (n > 9)
			{
				_putchar(1 + 48);
				j = n % 10;
			}
			_putchar(j + 48);
			}
			_putchar('\n');
		}
}




