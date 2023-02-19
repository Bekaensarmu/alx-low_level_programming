#include <stdio.h>
#include <time.h>

/**
 * main - entry point
 * Return: Always 0 (Seccess)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
