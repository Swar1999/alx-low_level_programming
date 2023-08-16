#include "main.h"

/**
 * jack_bauer - Entry point
 * Description: program that prints every minute in a day
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int h;
	int m;
		for (h = 0; h < 24; h++)
		{
			for (m = 0; m < 60; m++)
				_putchar(h:m);
		}
}
