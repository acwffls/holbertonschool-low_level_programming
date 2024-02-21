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
	char letter;

	/* Initialisation à la lettre 'z' */
	letter = 'z';

	/* Utilisation de putchar dans une boucle pour imprimer alphbt à l'envers */
	while (letter >= 'a')
{
	putchar(letter);
	letter--; /* Décrémentation pour passer à la lettre précédente */
}

    /* Utilisation de putchar pour imprimer une nouvelle ligne à la fin */
	putchar('\n');
	return (0);
}
