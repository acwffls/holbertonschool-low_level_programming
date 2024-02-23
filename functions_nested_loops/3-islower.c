#include <ctype.h>
#include "main.h"

/**
 * _islower - Look the description
 * @c : character
 * Description: Write a function that checks for lowercase character
 * Return: 1 or 0
 */

int _islower(int c)
{
	/* Utilisation de l'ASCII pour vérifier si c est une minuscule */
	return (c >= 'a' && c <= 'z');
}

