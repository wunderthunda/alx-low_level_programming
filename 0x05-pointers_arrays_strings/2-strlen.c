#include "main.h"

/**
 * _strlen - returnsthe length of a string.
 *
 * @s : input stringreturn
 *
 * Return: length of a string.
 */

int _strlen(char *s);
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
