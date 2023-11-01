#include "main.h"

/**
 * _strdup - function returns a pointer to a newly allocated space in memory
 * @str: function parameter
 * Return: Null or Pointer
 */

char *_strdup(char *str)
{
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}

	duplicate = (char *)malloc(strlen(str) + 1);

	if (duplicate == NULL)
	{
		return (NULL);
	}

	strcpy(duplicate, str);

	return (duplicate);
}
