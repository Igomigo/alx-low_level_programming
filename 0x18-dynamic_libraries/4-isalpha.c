#include "main.h"

/**
 * _isalpha - Checks for lower and uppercase letters
 * @c: Character to be checked
 *
 * Return: 1 if c is upper or lowercase, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
