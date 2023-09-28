#include "main.h"
int _sqrt(int n, int i);
/**
 * _sqrt_recursion - function for square root
 * @n: number
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - function giver the square root of num
 * @n : number to calculate the root
 * @i : ittreation
 * Return: the root of n
 */
int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1); /*not root*/
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
