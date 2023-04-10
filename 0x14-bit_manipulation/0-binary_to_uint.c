#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	unsigned int i;

	for (result = 0, i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
			result = (result << 1) | 1;
		else if (b[i] == '0')
			result <<= 1;
		else if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	return (result);
}
