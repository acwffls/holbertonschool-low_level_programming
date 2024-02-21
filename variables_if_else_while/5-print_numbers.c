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
	int i;

	for (i = 0; i < 10; i++)
{
	/* Utilisation de putchar pour imprimer chaque nombre à un chiffre */
	putchar('0' + i);
}
	/* Utilisation de putchar pour imprimer une nouvelle ligne à la fin */
	putchar('\n');

	return (0);
}
