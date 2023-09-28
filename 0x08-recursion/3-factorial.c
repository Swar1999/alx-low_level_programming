#include "main.h"
/**
 * factorial - function that gives num factorial
 * @n: number to calaculate
 * Return: the factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);/*case one*/
	if (n == 0)
		return (1);/*case two*/
	return (n * factorial(n - 1));/*case three*/
}
