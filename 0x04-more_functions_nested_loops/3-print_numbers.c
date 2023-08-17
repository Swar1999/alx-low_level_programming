#include "main.h"

/**
 * print_numbers - Entry point
 * Description: program that prints numbers from 1 to 9
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	int num = 0;

	do {
		_putchar(num + 48);
		num++;
	} while (num >= 0 && num <= 9);
	_putchar("\n");
}
