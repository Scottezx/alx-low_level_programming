#include "main.h"

/**
 * swap_int - take in two two variables integers and exchange them
 * @a: exchange and store address of b
 * @b: exchange and stores address of a
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int change;

	change = *b;
	*b = *a;
	*a = change;

}
