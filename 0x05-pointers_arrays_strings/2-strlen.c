#include "main.h"

/**
 * _strlen - length of the string
 * @s: check string
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int string_length = 0;

	while (s[string_length])
		string_length++;
	return (string_length);
}
