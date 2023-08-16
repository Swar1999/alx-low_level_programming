#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Description: program that prints fibonacci serise
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count, init10;
	unsigned long f1 = 1, f2 = 2, sum, mx = 100000000, f10 = 0, f20 = 0, sumo = 0;

	for (count = 1; count <= 98; count++)
	{
		if (f10 > 0)
			printf("%u,", f10);
		init10 = numLength(mx) - 1 - numLength(f1);

		while (f10 > 0 && init10 > 0)
		{
			printf("%d", 0);
			init10--;
		}
		printf("%lu", f1);
		sum = (f1 + f2) % mx;
		sumo = f10 + f20 + (f1 + f2) / mx;
		f1 = f2;
		f10 = f20;
		f20 = sumo;

		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}

