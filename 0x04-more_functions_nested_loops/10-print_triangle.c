#include "main.h"

/**
 * print_triangle - functio prints a triangle
 * @size: function parameter
 * Return: 0 (success)
 */

void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0 ; a < size ; a++)
		{
			for (b = size - a ; c > 1 ; b--)
			{
				_putchar(32);
			}
			for (c = 0 ; c <= a ; c++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
