#include "main.h"

/**
 * _strlen - return a string length
 * @s: string input
 * Return: length of a string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
