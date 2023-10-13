#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (success)
 */

int main(void)
{
	int a;

	for (a = 1 ; a <= 100 ; a++)
	{
		if (a % 3 == 0)
			printf("%s", "Fizz");
		else if (a % 5 == 0)
			printf("%s", "Buzz");
		else if ((a % 3 == 0) && (a % 5 == 0))
			printf("%s", "FizzBuzz");
		else
			printf("%d", a);
		if (a != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
