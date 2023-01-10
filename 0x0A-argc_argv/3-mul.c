#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("Error\n");
	return (1);
	}

	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int mul = a * b;

	printf("%d\n", mul);

	return (0);
}
