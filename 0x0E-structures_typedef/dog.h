#ifndef DOG_H
#define DOG_H

/**
 *  * struct dog - Represents information about a dog
 *   * @name: The name of the dog (a string)
 *    * @age: The age of the dog (a float)
 *     * @owner: The owner of the dog (a string)
 */



typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif /* DOG_H */
