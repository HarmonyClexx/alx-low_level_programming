#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int c, boolean, boolean2;
	long int num1, num2, fibn1, fibn2, n11, n22;

	num1 = 1;
	num2 = 2;
	boolean =  boolean2 = 1;
	printf("%ld, %ld", num1, num2);
	for (c = 0; c < 96; c++)
	{
		if (boolean)
		{
			fibn1 = num1 + num2;
			printf(", %ld", fibn1);
			num1 = num2;
			num2 = fibn1;
		}
		else
		{
			if (boolean2)
			{
				n11 = num1 % 1000000000;
				n22 = num2 % 1000000000;
				num1 = num1 / 1000000000;
				num2 = num2 / 1000000000;
				boolean2 = 0;
			}
			fibn2 = (n11 + n22);
			fibn1 = num1 + num2 + (fibn2 / 1000000000);
			printf(", %ld", fibn1);
			printf("%ld", fibn2 % 1000000000);
			num1 = num2;
			n11 = n22;
			num2 = fibn1;
			n22 = (fibn2 % 1000000000);
		}
		if (((num1 + num2) < 0) && boolean == 1)
			boolean = 0;
	}
	printf("\n");
	return (0);
}
