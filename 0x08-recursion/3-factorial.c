#include "main.h"

/**
 * factorial - function finds the factorial of a number
 * @n: number which factorial is to be found for
 * Return: factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
