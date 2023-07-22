#include "main.h"

/**
 * _isupper - checks forlowercase character
 * @c: The character to be checked
 * Return: 1 for uppercase character or 0 for any other thing
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
