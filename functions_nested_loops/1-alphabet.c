#include "main.h"

/**
 * print_alphabet - look the description
 * Description: print the alphabet in lowercase followed by a new line
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
