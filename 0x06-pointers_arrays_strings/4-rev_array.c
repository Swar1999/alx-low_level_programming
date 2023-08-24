#include "main.h"

/**
 * reverse_array - Entry point
 * Description: program that reverse an array
 * @a :pointer
 * @n: counter
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
		for (i = 0; i < n--; i++)
		{
			j = a[i];
			a[i] = a[n];
			a[n] = j;
		}
}

