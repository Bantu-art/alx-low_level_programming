#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabets x10 in lowercases
 * Return: 0 (success)
 */

void print_alphabet_x10(void)
{
	int j;
	char letter;

	for (j = 0 ; j < 10 ; j++)
	{
		for (letter = 'a' ; letter <= 'z' ; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
