#include "main.h"

/**
 * print_rev - function prints string in reverse
 * @s: string to print
 * Return: 0 (success)
 */
void print_rev(char *s)
{
	int a;
	int length = 0;

	for (a = 0 ; s[a] != '\0' ; a++)
		length++;
	for (a = length - 1 ; a >= 0 ; a--)
		_putchar(s[a]);
	_putchar('\n');
}
