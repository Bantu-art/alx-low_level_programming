#include "main.h"
/**
 * jack_bauer - functions prints every minute of the day
 * Return: 0 (success)
 */

void jack_bauer(void)
{
	int a, b;

	for (a = 0 ; a < 23 ; a++)
	{
		for (b = 0 ; b < 60 ; b++)
		{
			_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
			_putchar(':');
			_putchar(b / 10 + '0');
			_putchar(b % 10 + '0');
			_putchar('\n');
		}
	}
}
