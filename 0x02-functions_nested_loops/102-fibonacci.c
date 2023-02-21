#include <stdio.h>

/**
 * main - Prints the add of the Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int c;
	long int num1, num2, fibn;

	num1 = 1;
	num2 = 2;
	printf("%ld, %ld", num1, num2);
	for (c = 0; c < 48; c++)
	{
		fibn = num1 + num2;
		printf(", %ld", fibn);
		num1 = num2;
		num2 = fibn;
	}
	printf("\n");
	return (0);
}
