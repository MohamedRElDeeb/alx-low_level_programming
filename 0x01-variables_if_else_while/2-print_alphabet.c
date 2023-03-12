#include <stdio.h>

/**
 * main - Entry point
 * the program prints lowercase alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}
