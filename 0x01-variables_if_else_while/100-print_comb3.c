#include <stdio.h>

/**
 * main - Entry point
 * print all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, x = 8, z = 9;

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			if ((i != x) || (j != z))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
