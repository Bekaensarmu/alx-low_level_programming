#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 * @n: The numer to be treated
 * Retunrn: Value of the last difit of number
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
			return (last);
}


