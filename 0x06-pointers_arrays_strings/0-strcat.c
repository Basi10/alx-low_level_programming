#include "main.h"

/**
 * _strcat - concatnates two strings
 * @dest: String 1
 * @src: String 2
 * Return: s1 + s2
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	for (i = 0; dest[i] != '\0'; i++)
	;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
