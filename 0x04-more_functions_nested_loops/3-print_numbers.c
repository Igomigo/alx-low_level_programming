#include "main.h"

/**
 * print_numbers - Functions that print 0 to 9 numbers
 *
 * Return: void
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		_putchar(num);
	}

	_putchar('\n');
}
