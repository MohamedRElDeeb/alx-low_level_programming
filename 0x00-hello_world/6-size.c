#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %c byte(s)\n", Sizeof(char));
	printf("Size of an int: %d byte(s)\n", Sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", Sizeof(long int));
	printf("Size of a long long int: %lld byte(s)\n", Sizeof(long long int));
	printf("Size of a float: %f byte(s)\n", Sizeof(float));
	return (0);
}
