#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char alphabet;

        for (alphabet = 'a' ; alphabet <= 'Z' ; alphabet++)
        {
                putchar(alphabet);
        }
        putchar ('\n');
        return (0);
}
