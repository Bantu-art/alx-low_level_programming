#include "main.h"

/**
 * array_range - function creates an array of integers
 * @min: function parameter 1
 * @max: function parameter 2
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	 size_t num_elements = (size_t)(max - min + 1);
	size_t i;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}


	arr = (int *)malloc(num_elements * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < num_elements; i++)
	{
		arr[i] = min + (int)i;
	}

	return (arr);
}
