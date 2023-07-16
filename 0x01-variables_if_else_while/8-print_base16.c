#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 and letters between a to f.
 *
 * Return: Always 0 
 */
int main()
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
