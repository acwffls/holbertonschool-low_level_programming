#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - look the description
 * Description: print the alphabet in lowercase followed by a new line
 * @r: an integer
 * Return: Value of last digit
 */

int print_last_digit(int r)
{
	int n;

	if (r < 0)
		n = -1 * (r % 10);
	else
		n = r % 10;

	_putchar((n % 10) + '0');
	return (n % 10);
}
