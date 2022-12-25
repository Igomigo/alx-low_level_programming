#include "main"

/**
 * print_diagonal - Function that draws a diagonal line on the terminal
 * @n: number of times
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i;

	if (n <= 0)
		_putchar("\n");

	for (i = 0; i < n; i++)
	{
		_putchar('\\');
	}
	_putchar("\n");
}
