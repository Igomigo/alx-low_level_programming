#include "main.h"

/**
 * pow_recursion - function that returns x raised to power of y
 * @x: int
 * @y: int
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		reurn (-1);
	}
	else if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}
