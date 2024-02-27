#include "main.h"
#include <stdio.h>

/**
 * _puts - look description
 * Description: Write a function that prints a string
 * @str: an input string
 * Return: nothing
*/

void _puts(char *str)

{
	int i = 0;

	while (str[i] != '\0')
{
	_putchar(str[i]);
	i++;
}
	_putchar('\n');
}
