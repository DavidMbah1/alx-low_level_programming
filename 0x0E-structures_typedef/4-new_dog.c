#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int ny, oy, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (ny = 0; name[ny]; ny++)
		;
	ny++;
	dog->name = malloc(ny * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < ny; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (oy = 0; owner[oy]; oy++)
		;
	oy++;
	dog->owner = malloc(oy * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < oy; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
