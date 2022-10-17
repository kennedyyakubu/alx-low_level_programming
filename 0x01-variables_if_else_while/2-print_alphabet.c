#include <stdio.h>

/**
 * main - print alphabet in lower case
 * Return: Always 0
 */
ini main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
