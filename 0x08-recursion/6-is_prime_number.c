#include "main.h"
int a_prime(int n, int i);
/**
 * is_prime_number - Entry point
 * Description: program that prints prime number
 * @n : intger
 * Return: Always 0 (Success)
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (a_prime(n, n - 1));
}
/**
 * a_prime - Entry point
 * Description: program that prints prime number
 * @n : intger
 * @i : intger
 * Return: Always 0 (Success)
 */
int a_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (a_prime(n, i - 1));
}
