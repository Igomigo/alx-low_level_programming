#include "main.h"

/**
 * _puts_recursion - Function that prints a string
 * @s: string
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s == 0)
		return;
	{
		_putchar('\n');
		return;
	}
	_puts_recursion(s + 1);
	_putchar(*s);
}
