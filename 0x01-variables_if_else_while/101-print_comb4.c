#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 /**
  * main - entry point
  * Return: 0 (Seccess)
  */
int main(void)

{

	int d, p, q;

	srand(time(0));
	d = rand() - RAND_MAX / 2;

	for (d = '0'; d < '9'; d++)
	{
		putchar(d);
	}
	for (p = d + 1; p <= '9'; p++)
	{
		putchar(p);
	}
	for (q = p + 1; q <= '9'; q++)
	{
		putchar(q);
	}
	if ((p != d) != q)
	{
	if (d == '7' && p == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
