#include "main.h"

/**
 * create_array - function creates an array of characters and innitializes it
 * @size: represents the number of characters needed
 * @c: character to fill with arrays
 * Return: pointer or Null
 */

char *create_array(unsigned int size, char c)
{

	char *charArray;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	charArray = (char *)malloc(size * sizeof(char));

	if (charArray == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		charArray[i] = c;
	}
	return (charArray);
}
