#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - main entry
 * Description :function that prints strings, followed by a new line
 * @separator :string to be printed between the strings
 * @n : number of strings passed to the function
 * @... : indefinit arguments
 * Return : nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list m;
	char *string;
	unsigned int i;
		va_start(m, n);
		for (i = 0; i < n; i++)
		{
			string = va_arg(m, char *);
			if (separator == NULL)
				printf("(nil)");
			else
				printf("%s", string);
			if (i != (n - 1) && separator != NULL)
				printf("%s", separator);
			}
			printf("\n");
		va_end(m);
}
