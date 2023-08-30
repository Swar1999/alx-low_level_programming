#include "main.h"

/**
 * _pow_recursion - Entry point
 * Description: program that return valu of x to the power y
 * @x: intger 1
 * @y: intger 2
 * Return: Always 0 (Success)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
