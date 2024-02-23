#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - look the description
 * Description: print the alphabet in lowercase 10x
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; i++)
{
	letter = 'a';
	while (letter <= 'z')
{
	_putchar(letter);
	letter++;
}
	_putchar('\n');
}
}
