#include "main.h"

/**
 * a__sqrt_recursion - Entry point
 * Description: program that return the square root
 * @n :intger 1
 * @i :intger 2
 * Return: Always 0 (Success)
 */
int a_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (a_sqrt_recursion(n, i + 1));
}

