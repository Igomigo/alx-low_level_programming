#include<stdio.h>
/**
 * main - print out sizes of data types in C
 * code by da soft engineer
 * Return: 0
*/
int main(void)
{

	printf("size of a char: %i byte(s)\n", sizeof(char));
	printf("size of an int: %i byte(s)\n", sizeof(int));
	printf("size of a long int: %i bytes(s)\n", sizeof(long int));
	printf("size of a long long int: %i bytes(s)\n", sizeof(long long int));
	printf("size of a float: %i byte(s)\n", sizeof(float));
	return (0);
}
