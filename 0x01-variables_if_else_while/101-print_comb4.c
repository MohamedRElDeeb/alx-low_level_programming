#include <stdio.h>

/**
 * main - Entry point
 * print all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, k, x = 7, y = 8, z = 9;

	for (i = 0; i <= 7; i++)
	{
		for (j = i + 1; j <= 8; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);
				if (((i != x) ||  (j != y)) && (j != z))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
