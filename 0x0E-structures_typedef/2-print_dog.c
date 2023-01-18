#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Function that prints a struct dog
 * @d: pointer to structure
 *
 * Return: 0
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("nil");

	printf("Name: %s\n", d->name);
	printf("Age: %d\n", d->age);
	printf("Owner: %s\n", d->owner);
}
