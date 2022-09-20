#include "main.h"

/**
 * _puts - prints a string followed by new line
 * @str: String input
 * Return: none
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
