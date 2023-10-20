#include "main.h"

/**
 * string_toupper - function changes lowercase to upper
 * @n: pointer
 * Return: n
 */

char *string_toupper(char *n)
{

	int a;

	a = 0;
	while (n[a] != '\0')
	{
		if (n[a] >= 'a' && n[a] <= 'z')
			n[a] = n[a] - 32;
		a++;
	}
	return (n);
}

