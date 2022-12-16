#include "main.h"

/**
 * main - A function that checks for lowercase
 * @c: The character to be checked
 * @_islower: function to be declared
 *
 * Return: 1 if character is lowercase, otherwise return 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
