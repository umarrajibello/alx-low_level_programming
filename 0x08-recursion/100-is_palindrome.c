#include "main.h"
#include <string.h>

/**
 * helper - helps the parindrom check
 * @s: the string
 * @left: left of string
 * @right: right of string
 *
 * Return: return 1 if palindrome, 0 otherwise
 */


int helper(char *s, int left, int right)
{
	if (left >= right)
		return (1);
	else if (s[left] == s[right])
		return (helper(s, left + 1, right - 1));
	else
		return (0);
}

/**
 * is_palindrome - check for palindrome
 * @s: the string to be checke
 *
 * Return: return 1 if palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int left, right;

	left = 0;
	right = strlen(s) - 1;
	if (s == NULL)
		return (0);
	if (*s == '\0')
		return (1);

	return (helper(s, left, right));
}
