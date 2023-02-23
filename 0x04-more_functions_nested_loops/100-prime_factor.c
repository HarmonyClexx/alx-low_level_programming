#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
	long int num, primeFactor;

	num = 612852475143;
	for (primeFactor = 2; primeFactor <= num; primeFactor++)
	{
		if (num % primeFactor == 0)
		{
			num /= primeFactor;
			primeFactor--;
		}
	}
	printf("%ld\num", primeFactor);
	return (0);
}
