#include "main.h"

/**
 * _isdigit - run for digits
 * @c:character to be checked
 * Return: 1 for digit character or 0 for every other thing
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
