#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n array elements
 * @a: array
 * @n: array length
 * Return: none
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
	}
	printf("\n");
}
