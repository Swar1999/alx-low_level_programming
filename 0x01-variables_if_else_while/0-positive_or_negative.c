#include <stdio.h>
#include <time.h>
#include <stdlid.h>
/**
 * main - Entry point
 *  Description: programe that use the rand functoin
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	Srand(time(0));
	n = rand() - RAND_MAX  / 2;
	if (n > 0)
		printf("%d is positive \n", n);
	else if (n == 0)
		printf("%d is zero \n", n);
	else
		printf("%d is negative \n", n);
	return (0);
}

