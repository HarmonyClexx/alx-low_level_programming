#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring.
 * needle in the string haystack.
 * @haystack: entire string.
 * @needle: substring.
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	char *p = haystack;
	while (*p != '\0')
	{
		char *q = needle;
		char *r = p;
		while (*q != '\0' && *r != '\0' && *q == *r)
		{
			q++;
			r++;
		}
		if (*q == '\0')
		{
			return (p);
		}
		p++;
	}
	return ('\0');
}
