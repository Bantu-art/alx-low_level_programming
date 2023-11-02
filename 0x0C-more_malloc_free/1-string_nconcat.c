#include "main.h"

/**
 * string_nconcat - function concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: concatenates string
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t len1, len2;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}

	result = (char *)malloc(len1 + n + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	strcpy(result, s1);

	strncat(result, s2, n);

	return (result);
}
