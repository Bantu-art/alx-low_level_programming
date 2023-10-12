#include "main.h"
/**
 * print_numbers - function prints numbers from 0 to 9 then new line
 * Return: 0 (success)
 */

void print_numbers(void)
{
	int a;

	for (a = 0 ; a <= 9 ; a++)
		_putchar(a + '0');
	_putchar('\n');
}
