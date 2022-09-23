#include "main.h"

/**
 * _strncat - concatnates two strings
 * @dest: destination pointer
 * @src: src pointer
 * @n: number of bytes
 * Return: s1 + s2
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	for (i = 0; dest[i] != '\0'; i++)
	;
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

