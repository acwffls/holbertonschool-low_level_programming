#include "main.h"
#include <stdio.h>

/**
 * print_sign - look the description
 * @n: a number
 * Description: print sign of a number
 * Return: 1, 0 or -1
 */

int print_sign(int n)
{
if (n > 0)
{
	printf("+");
	return (1);
}
else if (n == 0)
{
printf("0");
	return (0);
}
else
{
printf("-");
	return (-1);
}
}
