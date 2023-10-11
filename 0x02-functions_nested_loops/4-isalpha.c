#include "main.h"
/**
 * int_isalpha - checks for alphabets whether lower r upper case
 * @c: function parameter
 * Return: 1 (success) or 0 (failure)
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z')  || (c >= 'a' && c <= 'Z'))
		return (1);
	else
		return (0);
}
