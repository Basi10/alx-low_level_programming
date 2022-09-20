#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: first param
 * @b: second param
 * Return: none
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
