#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description : Ce programme imprime les chiffres de 0 à 9,
 *                suivis d'une nouvelle ligne, en utilisant putchar.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	putchar(d);
	/* Utilisation de putchar pour imprimer une nouvelle ligne à la fin */
	putchar('\n');

	return (0);
}
