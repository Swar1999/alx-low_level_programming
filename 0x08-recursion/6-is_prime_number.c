#include "main.h"
int prime(int n, int i);
/**
 * is_prime_number - functin to ckeck if num is prime
 * @n: num to check
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	return (prime(n, 1));
}
/**
 * prime - to check num
 * @n: number
 * @i: itreation
 * Return: 1 or 0
 */
int prime(int n, int i)
{
	if (n == 1)
		return (1);
	if (n < 0)
		return (0);
	if (n % i == 0 && i > 0)
		return (0);
	else
		return (prime(n, i + 1));
}
