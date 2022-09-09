#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: size of arguments
 * @argv: array of arguments
 * Return: Success (0)
 */
int main(int argc, char *argv[])
{
	if (argc > 2)
	{
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	printf("Error\n");
	return (1);
}
