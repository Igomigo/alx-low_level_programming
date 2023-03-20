#include "main.h"

/**
 *  _strlen - a function that returns the length of a string.
 *  @s: char to check the length of string
 *
 *  Return: 0
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
