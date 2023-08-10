#include "main.h"

/**
 * _memset - The program populates a section of memory with a particular value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 * Return: changing array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int z = 0;

	for (; n > 0; z++)
	{
		s[z] = b;
		n--;
	}
	return (s);
}
