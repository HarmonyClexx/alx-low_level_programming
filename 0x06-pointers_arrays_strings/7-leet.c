#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: input string.
 * Return: s.
 */

char *leet(char *s)
{
	int count = 0, i;
	int smallLetters[] = {97, 101, 111, 116, 108};
	int bigLetters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + count) == smallLetters[i] || *(s + count) == bigLetters[i])
			{
				*(s + count) = numbers[i];
				break;
			}
		}
		count++;
	}

	return (s);
}
