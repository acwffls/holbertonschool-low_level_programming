#include "main.h"

/**
 * swap_int - look description
 * Description: Write a function that swaps the values of 2 integers
 * @a: an input integer pointer
 * @b: an input integer pointer
 * Return: nothing
*/

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
