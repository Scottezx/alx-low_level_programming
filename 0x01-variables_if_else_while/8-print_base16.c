#include <stdio.h>

/**
 * main - prints numbers and letters between a to f
 *
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		putchar(c);
	}
	for (c = 97; c < 103; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
