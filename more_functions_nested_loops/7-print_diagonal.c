#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - look the description
 * Description: write a function that draws a diagonal line on the terminal
 * @n: an input integer
 * Return: Nothing
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
{
	_putchar('\n');
}
	else
{
	for (i = 0; i < n; i++)
{
	for (j = 0; j < i; j++)
{
	_putchar(' ');
}
	_putchar('\\');
	_putchar('\n');
}
}
}
