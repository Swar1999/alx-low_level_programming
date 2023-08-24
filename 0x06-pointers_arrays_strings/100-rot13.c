#include "main.h"

/**
 * rot13 - Entry point
 * Description: program that encrypt string using rot13
 * @n : pointer
 * Return: Always 0 (Success)
 */
char *rot13(char *n)
{
	int i;
	int j;
	char str1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char strrot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
		for (i = 0; n[i] != '\0'; i++)
		{
			for (j = 0; j < 52; j++)
			{
				if (n[i] == str1[j])
				{
					n[i] = strrot[j];
					break;
				}
			}
		}
		return (n);
}

