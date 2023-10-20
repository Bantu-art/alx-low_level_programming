#include "main.h"
#include <stdio.h>

/**
 * rot13 - rot13 encoder
 * @s: pointer to string parameter
 * Return: *s
 */

char *rot13(char *s)
{
	int a;
	int b;
	char data1[] =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] =
		"NOPQRSTUVWXYZABCDEFGHIJKLMopqrstuvwxyzabcdefghijklm";
	for (a = 0 ; s[a] !=  '\0' ; a++)
	{
		for (b = 0 ; b < 52 ; b++)
		{
			if (s[a] == data1[b])
			{
				s[a] = datarot[b];
				break;
			}
		}
	}
	return (s);
}
