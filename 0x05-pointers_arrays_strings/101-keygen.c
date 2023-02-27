#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates keygen.
 * Return: 0 Always.
 */
int main(void)
{
	int random = 0, c = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (c < 2772)
	{
		random = rand() % 128;
		if ((c + random) > 2772)
			break;
		c = c + random;
		printf("%c", random);
	}
	printf("%c\n", (2772 - c));
	return (0);
}
