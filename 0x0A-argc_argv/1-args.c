#include<stdio.h>
#include<stdlib.h>

/**
 * main - Prints the number of args
 * @argc: size of arguments
 * @argv: array of arguments
 * Return: Success (0)
 */
int main(int argc, char **argv)
{
	if (**argv)
		printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}
