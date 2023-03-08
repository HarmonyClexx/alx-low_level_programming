#include "main.h"
#include <string.h>

/**
 * is_palindrome_helper - detects if a string is a palindrome.
 * @s: string.
 * @start: start
 * @end: end
 * Return: 1 if s is a palindrome, 0 if not.
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return 1;
	else if (s[start] != s[end])
		return 0;
	else
		return is_palindrome_helper(s, start + 1, end - 1);
}
/**
 * is_palindrome - detects if a string is a palindrome.
 * @s: string.
 * Return: 1 if s is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	int length = strlen(s);
	if (length <= 1)
		return 1;
	else
		return is_palindrome_helper(s, 0, length - 1);
}
