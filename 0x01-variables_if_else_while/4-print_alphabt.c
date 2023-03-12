#include <stdio.h>

/**
 * main - Entry point
 * print aphabet lowercase letters except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		if (al == 'q' || al == 'e')
		{
		continue;
		}
	putchar(al);
	}
putchar('\n');
return (0);
}
