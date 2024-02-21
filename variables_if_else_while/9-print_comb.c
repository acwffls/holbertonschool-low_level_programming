#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
{
	/* Utilisation de putchar pour imprimer nbr actuel */
	putchar('0' + number);
	/* Use putchar pour imprimer la ',' et ' ' sauf pour last nbr */
	if (number < 9)
{
	putchar(',');
	putchar(' ');
}
}
	/* Utilisation de putchar pour imprimer une nouvelle ligne à la fin */
	putchar('\n');
	return (0);
}
