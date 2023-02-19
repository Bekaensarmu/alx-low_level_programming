#include <stdio.h>

/**
 * main - prints the alphabetic
 * Retrun: Always (Success)
 */


int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
