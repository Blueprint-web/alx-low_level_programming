#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * _strlen - the string lenght funtion
 * @s: the string
 * Return: the length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * _strcpy - the string copy funtion
 * @dest: the destination for the copied string
 * @src: the source to copy from
 * Return: the copied string
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (src[len] != '\0')
	{
		dest[len] = src[len];
		len++;
	}
	return (dest);
}
/**
 * new_dog - the new dog funtion
 * @name: the dog name
 * @age: the dog age
 * @owner: the dog owner
 * Return: the new dog name and owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);
	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	new->name = malloc(sizeof(char) * len1);
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}
	new->owner = malloc(sizeof(char) * len2);
	if (new->owner == NULL)
	{
		free(new);
		free(new->name);
		return (NULL);
	}
	_strcpy(new->name, name);
	_strcpy(new->owner, owner);
	new->age = age;
	return (new);
}
