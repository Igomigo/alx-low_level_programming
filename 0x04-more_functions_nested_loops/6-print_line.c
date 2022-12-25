#include "main.h"

/**
 * print_line - Funcion that draws a straight line in terminal
 * @n: Number of times the character '_' is printed
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar("\n");
}
