#include <stdio.h>
/**
 * add - function to add 2 numbers
 * @a: number 1
 * @b: number 2
 * Return: the result
 */
int add(int a, int b)
{
	return (a + b);
}
/**
 * sub - function to sub 2 numbers
 * @a: number 1
 * @b: number 2
 * Return: the result
 */
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul - function to mul 2 numbers
 * @a: number 1
 * @b: number 2
 * Return: the result
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * div - function to divid 2 numbers
 * @a: number 1
 * @b: number 2
 * Return: the result
 */
int div(int a, int b)
{
	if (b == 0)
	{
		printf("can't divid by 0\n");
		return (0);
	}
	return (a / b);
}
/**
 * mod - function to mod 2 numbers
 * @a: number 1
 * @b: number 2
 * Return: the result
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("can't divid by 0\n");
		return (0);
	}
	return (a % b);
}
