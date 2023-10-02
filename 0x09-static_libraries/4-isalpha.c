#include "main.h"
/**
 * _isalpha - Entry point
 * Description: program that checks for characters
 * @c : checking characters
 * Return: return 1 if 'c' exist else  Always 0 (Success)
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
