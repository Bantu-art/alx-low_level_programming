#include "main.h"

/**
 * str_concat - function concatenates two strings
 * @s1: function parameter one
 * @s2: function parameter two
 * Return: Null or pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	result = (char *)malloc(strlen(s1) + strlen(s2) + 1);

	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strcat(result, s2);

	return (result);
}
