#include "main.h"
/**
 * int _isalpha - checks for aphabets both lower and upper  case
 * @c: function parameter
 * Return: 1 (success) or 0 (failure)
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z')  || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
