#include "main.h"

/**
 * puts_half - function prints the half of a string
 * @str: parameter to be printed
 * Return: 0 (success)
 */
void puts_half(char *str)
{
	int a, n, length = 0;

	for (a = 0 ; str[a] != '\0' ; a++)
		length++;
	n = (length - 1) / 2;
	for (a = n + 1 ; str[a] != '\0' ; a++)
		_putchar(str[a]);
	_putchar('\n');
}
