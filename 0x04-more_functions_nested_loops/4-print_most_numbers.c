#include "main.h"

/**
 * print_most_numbers - function prints 0 to 9 but 2 to 4 excluded
 * Return: 0 (success)
 */

void print_most_numbers(void)

{
	int a;

	for (a = 0 ; a < 10 ; a++)
	{
	if (a != 2 && a != 4)
	_putchar(a + '0');
	}
	_putchar('\n');
}
