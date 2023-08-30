#include "main.h"
int a_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - Entry point
 * Description: program that check n value
 * @n : intger
 * Return: Always 0 (Success)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (a_sqrt_recursion(n, 0));
}

/**
 * a_sqrt_recursion - Entry point
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

