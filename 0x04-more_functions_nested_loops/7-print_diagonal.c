#include "main.h"

/**
 *print_diagonal - function draws a diagonal on the terminal
 *@n: function parameter
 *Return: 0 (success)
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int a, b;

		for (a = 1 ; a <= n ; a++)
		{
			for (b = 0 ; b <= a ; b++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
