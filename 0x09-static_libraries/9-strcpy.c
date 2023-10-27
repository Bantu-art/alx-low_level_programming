#include  "main.h"

/**
 * _strcpy - function copies strings
 * @dest: shows destination
 * @src: shows source
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0 ; src[a] != '\0' ; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}
