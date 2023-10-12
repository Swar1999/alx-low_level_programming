#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - calculate sum of all its parameters
 * @n : constant n
 * @... : paramters
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list x;/*initlize the variadic arguments*/
	unsigned int sum = 0;
	unsigned int i;/*for itretion*/
		va_start(x, n);/*start list*/
		for (i = 0; i < n; i++)
			sum += va_arg(x, int);
		va_end(x);/*relase the list*/
		return (sum);
}
