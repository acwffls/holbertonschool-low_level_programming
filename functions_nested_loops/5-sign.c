#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_sign - look the description
 * @n: a number
 * Description: print sign of a number
 * Return: 1, 0 or -1
 */

int print_sign(int n)
{
	char sign;

	if (n > 0)
{
	sign = '+';
	write(1, &sign, 1);
	return (1);
}
	else if (n == 0)
{
	sign = '0';
	write(1, &sign, 1);
	return (0);
}
	else
{
	sign = '-';
	write(1, &sign, 1);
	return (-1);
}
}
