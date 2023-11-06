#include <stdio.h>
#include "dog.h"
#include "main.h"

/**
 * init_dog - function initializes a variable of type struct dog
 * @d: function parameter 1
 * @name: function parameter 2
 * @age: function parameter 3
 * @owner: function parameter 4
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
