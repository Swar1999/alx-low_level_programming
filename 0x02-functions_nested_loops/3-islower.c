#include "main.h"

/**
 *  _islower - Entry point
 * Description: program that that checks for lowercase character
 * @c : check if char is lowercase
 * Return: return 1 if 'c' is lowercase else always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

