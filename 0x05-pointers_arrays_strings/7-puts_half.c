#include "main.h"

/**
 * puts_half - print a string starting from the mid element
 * @str: String input
 * Return: none
 */
void puts_half(char *str)
{
	int i = 0;
	int h;

	while (str[i] != '\0')
	{
		i++;
	}
	i++;
	for (h = i / 2; str[h] != '\0'; h++)
	{
		_putchar(str[h]);
	}
	_putchar('\n');
}
