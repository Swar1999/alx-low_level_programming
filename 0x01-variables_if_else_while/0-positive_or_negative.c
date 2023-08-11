#include <stdio.h>
/**
 * main - program that use the rand function
 * return 0 is succese
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

