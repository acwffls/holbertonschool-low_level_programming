#include "main.h"
#include <ctype.h>

/**
 * _isdigit - look the description
 * Description: write a function that checks for a digit
 * @c: an input character
 * Return: 0 or 1
 */

#include <ctype.h>

int _isdigit(int c)
{
	/* Vérifie si c est un chiffre (dans la plage ASCII des chiffres) */
	if (c >= '0' && c <= '9')
	return (1);
	else
	return (0);
}
