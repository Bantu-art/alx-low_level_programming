#include <stdio.h>

/**
 * main - function prints number of arguments passed into it
 * @argc: parameter 1
 * @argv: parameter 2
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
