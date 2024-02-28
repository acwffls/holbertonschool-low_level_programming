#include "main.h"
#include <stdio.h>

/**
 * puts2 - look description
 * description: write a function that prints every other character of a string
 * starting with the first character
 * @str: an input string
 * return: nothing
*/

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
{
	printf("%c", str[i]);
	i += 2;
}

	printf("\n");
}

