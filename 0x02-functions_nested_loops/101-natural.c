#include "main.h"

/**
 * main - Entry point
 * Description: program that calculate the multiply of
 * 3 & 5 blow 1024
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, sum;
		for (n = 1; n < 1024; n++)
		{
			if ((n % 3 == 0 || n % 5 == 0))
				sum += n;
		}
	printf("%d\n", sum);
	return (0);
}


