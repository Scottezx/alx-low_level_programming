#include <stdio.h>

/**
 * main - Prints numbers from 0 to 9.
 *
 * Return: Always 0
 */
int main()
{
        int d;

        for (d = 0; d < 10; d++)
        {
                putchar(d + '0');
        }

        putchar('\n');

        return 0;
}
