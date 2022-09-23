#include "main.h"

/**
 * reverse_array - Reverses an array
 * @a: Integer array input
 * @n: Number of bytes
 * Return: none
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
