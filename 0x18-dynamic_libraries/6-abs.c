#include "main.h"

/**
 * _abs - Computes absolute value of an integer
 * @x: Variable to be checked
 *
 * Return: The absolute value of the integer
 */

int _abs(int x)
{
	if (x < 0)
	{
		return (-x);
	}

	else
	{
		return (x);
	}
}
