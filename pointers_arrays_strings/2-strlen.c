#include "main.h"
#include <string.h>

/**
 * _strlen - look description
 * Description: Write a function that returns the length of a string
 * @s: an input string
 * Return: Nothing
*/

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
