#include "main.h"
#include <stdio.h>

/**
 * print_line - a function that draws a straight line in the terminal
 * @n: An input integer
 * Return: nothin
*/

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
