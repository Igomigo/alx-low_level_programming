#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of characters,
 * and initialises it with a specific char
 * @size: size of the char
 * @c: character
 *
 * Return: Null
 */

char *create_array(unsigned int size, char c)
{
	int *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = (char *)malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr{i} = c;

	return (arr);
}
		
