#include <stdio.h>

/**
 * main - Entry point
 * the program prints lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char al;

	for (al = 'z'; al >= 'a'; al--)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}
