#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Description: program that prints fizz or buzz or both
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char str1[] = "Fizz";
	char str2[] = "Buzz";
		for (i = 1; i <= 100; i++)
		{
			if (i % 3 == 0)
				printf("%s\n", str1);
			else if (i % 5 == 0)
				printf("%s\n", str2);
			else
				(i % 3 == 0 && i % 5 == 0)
				printf("%s\n", str1, str2);
			printf("%d\n", i);
		}
}






