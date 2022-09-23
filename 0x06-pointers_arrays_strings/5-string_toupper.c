#include "main.h"

/**
 * string_toupper - changes all chars to upper
 * @s1: String input
 * Return: Changed upper case value
 */
char *string_toupper(char *s1)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] >= 97)
		{
			s1[i] = s1[i] - 32;
		}
	}
	return (s1);
}
