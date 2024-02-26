#include "main.h"
#include <ctype.h>

/**
 * _isupper - look the description
 * Description: write a function that checks for uppercase character
 * @c: an input character
 * Return: 0 or 1
 */

int _isupper(int c)
{
	/* Vérifie si c est une majuscule (dans la plage ASCII des majuscules) */
	if (c >= 'A' && c <= 'Z')
	return (1); /* Renvoie 1 si c est une majuscule */
	else
	return (0); /* Renvoie 0 dans le cas contraire */
}
