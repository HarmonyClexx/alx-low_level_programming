#include <stdio.h>

/**
 * main - Prints the add of the even-valued
 * fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int num1, num2, fibn, afibn;

	num1 = 1;
	num2 = 2;
	fibn = afibn = 0;
	while (fibn <= 4000000)
	{
		fibn = num1 + num2;
		num1 = num2;
		num2 = fibn;
		if ((num1 % 2) == 0)
		{
			afibn += num1;
		}
	}
	printf("%ld\n", afibn);
	return (0);
}
