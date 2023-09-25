#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * description : prints the minimum number of coins
 *to make change for an amount of money
 * @argc : argument counter
 * @argv : argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int number, i, result;
	int coins[] = {25, 10, 5, 2, 1};
		if (argc != 2)/*check if number is exactly 1*/
		{
			printf("Error\n");
			return (1);
		}
		number = atoi(argv[1]); /*pares the number that passed*/
		result  = 0;
		if (argc < 0)/*ckeck if number is negative*/
		{
			printf("0\n");
			return (0);
		}
		for (i = 0; i < 5 && number >= 0; i++)/*see the array*/
		{
			while (number >= coins[i])
			{
				result++;
				number -= coins[i];
			}
		}
		printf("%d\n", result);
		return (0);
}




