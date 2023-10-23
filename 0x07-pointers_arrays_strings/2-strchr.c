#include "main.h"

/**
 * _strchr - function locates character in a string
 * @s: string to locate
 * @c: character to search is s
 * Return: s or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
