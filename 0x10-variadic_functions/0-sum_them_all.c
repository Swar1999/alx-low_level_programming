#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - entry point
 * Description : calculate sum of all its parameters
 * @n : constant n
 * @... : paramters
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list x;
	unsigned int sum = 0;
	unsigned int i;
		va_start(x, n);
		for (i = 0; i < n; i++)
			sum += va_arg(x, int);
		va_end(x);
		return (sum);
}
