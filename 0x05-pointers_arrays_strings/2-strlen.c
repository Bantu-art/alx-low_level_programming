#include "main.h"

/**
 * _strlen - function finds string length
 * @s: string to count
 * Return: length of string
 */
int _strlen(char *s)
{
	int a;
	int length = 0;

	for (a = 0 ; s[a] != '\0' ; a++)
		length++;
	return (length);
}
