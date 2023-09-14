#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - main entry
 * Description : function that prints anything
 * @format :list of types of arguments passed to the function
 * Retyrn : nothing
 */
void print_all(const char * const format, ...)
{
	va_list all;
	char c;
	unsigned int i;
	double f;
	char *s, 
	char sep = "";
	int j = 0;
		va_start(all, format);
		c = va_arg(all, char *);
		i = va_arg(all, int);
		f = va_arg(all, double);
		s = va_arg(all, char *);
		if (format)
		{
			while (format[j])
			{
				switch (format[j])
				{
					case 1:
						printf("%d%c", sep, c);
						break;
					case 2:
						printf("%d%d", sep, i);
						break;
					case 3:
						printf("%d%f", sep, f);
						break;
					case 4:
						if (s == NULL)
							printf("(nil)");
						printf("%d%s", sep, s);
						break;
					default :
						j++;
						continue;
				}
				sep = ",";
				j++;
			}
		}
		printf("\n");
		va_end(all);
}



