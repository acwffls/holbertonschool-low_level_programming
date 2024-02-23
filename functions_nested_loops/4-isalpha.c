#include <ctype.h>
#include "main.h"

/**
 * _isalpha - Look the description
 * @c : character
 * Description: Write a function that checks for alphabetic character
 * Return: 1 or 0
 */

int _isalpha(int c)
{
	/* Use des opérateurs logiques pour vérifier si c'est une lettre */
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
