#include "main.h"

/**
 * factorial - Entry point
 * Description: program that return the factorial of integer
 * @n : integer
 * Return: Always 0 (Success)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
