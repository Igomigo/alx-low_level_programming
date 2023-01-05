#include "main.h"

/**
 * _puts_recursion - Function that prints a string
 * @s: string
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar("\n");
		return (0);
	}
	puts_recursion(s + 1);
	_putchar(*s);
}
