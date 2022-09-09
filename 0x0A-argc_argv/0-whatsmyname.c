#include <stdio.h>
#include<stdlib.h>

/**
 * main - print the name
 * @argc: size of arguments
 * @argv: array of arguments
 * Return: Success
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	exit(EXIT_SUCCESS);
}
