#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print the numbers 1 - 100 w/
 * Fizz for multiples of 3 buzz for multiples of 5,
 * and Fizbuzz for multiples of both
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("Fizbuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
