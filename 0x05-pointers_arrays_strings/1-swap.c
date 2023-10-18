#include "main.h"

/**
 * swap_int - function swaps two integers
 * @a: first value
 * @b: second value
 * Return: 0 (success)
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
