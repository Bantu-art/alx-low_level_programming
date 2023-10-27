#include "main.h"
/**
 * _isdigit - function checks for digits 0 through 9
 * @c: function parameter
 * Return: 1 (success)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
