#include "main.h"

/**
 * leet - encodes a string to 1337
 *
 * @str: the string to be encoded
 *
 * Return: a pointer to the encoded string
 */
char *leet(char *str)
{
	int i = 0, j;

	char m[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (m[j] == str[i])
			{
				str[i] = n[j];
			}
		}
	}
	return (str);
}

