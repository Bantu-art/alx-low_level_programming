#include "main.h"

/**
 * print_line - function draws a straight line in the terminal
 * @n: funtion parameter
 * Return: 0 (success)
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int a;

		for (a = 1 ; a <= n ; a++)
			_putchar('_');
		_putchar('\n');
	}
}
