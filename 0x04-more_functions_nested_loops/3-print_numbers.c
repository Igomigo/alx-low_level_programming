#include <main.h>

/**
 * print_numbers - function tha prints the 0 to 9 numbers
 *
 * Return: 0
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		_putchar(num);
	}
	_putchar('\n');

	return (0);
}
