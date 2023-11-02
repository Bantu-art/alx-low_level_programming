#include "main.h"

/**
 * malloc_checked - function allocates memory using malloc
 * @b: function parameter
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	char *output;

	output = malloc(b);
	if (output == NULL)
		exit(98);
	else
		return (output);
}
