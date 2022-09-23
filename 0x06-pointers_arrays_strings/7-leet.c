#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @n: String input
 * Return: Capitalized
 */
char *leet(char *n)
{
	int i;
	int j;
	char c1[] = {'a', 'e', 'o', 't', 'l'};
	char c2[] = {'A', 'E', 'O', 'T', 'L'};
	int val[] = {52, 51, 48, 55, 49};

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (n[i] == c1[j] || n[i] == c2[j])
			{
				n[i] = val[j];
				break;
			}
		}
	}
	return (n);
}
