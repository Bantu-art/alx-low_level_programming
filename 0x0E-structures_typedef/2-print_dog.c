#include <stdio.h>
#include "dog.h"
#include "main.h"
/**
 * print_dog - function prints a struct dog
 * @d: function parameter
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
		 printf("Age: %f\n", d->age);
		 printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}