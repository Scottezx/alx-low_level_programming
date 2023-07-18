#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0
 */
int main(void)
{
	int a = 0;

	do {
		printf("%d", a);
		if (a < 9)
			printf(", ");
		a++;
	} while (a < 10);

	printf("\n");
	return (0);
}
