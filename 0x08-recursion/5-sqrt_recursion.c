#include "main.h"
/**
 * _sqrt_recursion - function for square root
 * @n: number
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_recursions(n, 1));
}
/**
 * _sqrt_recursions - function giver the square root of num
 * @n : number to calculate the root
 * @i : ittreation
 * Return: the root of n
 */
int _sqrt_recursions(int n, int i)
{
	if (i * i > n)
		return (-1); /*not root*/
	if (i * i == n)
		return (_sqrt_recursion(n, i + 1));
}
