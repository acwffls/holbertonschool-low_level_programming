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

	for (letter = 'a'; letter <= 'z'; letter++)
{
	/* Exclure les lettres 'q' et 'e' */
	if (letter != 'q' && letter != 'e')
{
	/* Utilisation de putchar pour imprimer chaque caractère */
	putchar(letter);
}
}
	/* Utilisation de putchar pour imprimer une nouvelle ligne à la fin */
	putchar('\n');

	return (0);
}
