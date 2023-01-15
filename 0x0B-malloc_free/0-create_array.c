#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of characters,
 * and initialises it with a specific char
 * @size: size of the char
 * @c: initial char
 *
 * Return: Null
 */

char *create_array(unsigned int size, char c)
{
	int *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = (char *)malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
