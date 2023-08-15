#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: program that prints alphabets
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;
	int ch;

	for (i = 0; i <= 9; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}

}
