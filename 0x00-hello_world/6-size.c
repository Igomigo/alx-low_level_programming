#include<stdio.h>
/**
 * main - print out sizes of data types in C
 * code by da soft engineer
 * Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("size of a int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(c));
	printf("size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
