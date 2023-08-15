#include "main.h"

/**
 *  print_sign - Entry point
 * Description: program that prints signs
 * @n : check numbers
 * Return: return 1 or -1 else always 0 (success)
 */
int print_sign(int n)
{
	if (n >= 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n <= 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}

