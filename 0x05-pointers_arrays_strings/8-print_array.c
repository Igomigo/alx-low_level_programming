#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers
 * @a: pointer parameter
 * @n: integer
 *
 * Return: 0
 */

void print_array(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
