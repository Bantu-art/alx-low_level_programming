#include "main.h"

/**
 * _memset - function fills memory with a constant byte
 * @s: area to fill with bytes
 * @b: constant byte
 * @n: number of bytes
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0 ; a < n ; a++)
		s[a] = b;
	return (s);
}
