#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function prints numbers, followed by a new line
 * @separator :string to be print between numbers
 * @n : number of passed ints
 * @...:variadic arguments
 * Return : nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list x;/*variadic arg*/
	unsigned int i;
		va_start(x, n);/*initilze the list*/
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(x, int));
			if (i != (n - 1) && separator != NULL)
				printf("%s", separator);
		}
		printf("\n");
		va_end(x);
}
