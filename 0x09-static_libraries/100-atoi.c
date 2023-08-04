#include "main.h"

/**
 * _atoi - convert a string to a number.
 * @s: the pointer to the string.
 *
 * Return: the converted number.
 */
int _atoi(char *s)
{
	int num, i;

	num = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + s[i] - '0';
		}
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			if (s[i - 1] != '-')
			{
				return (num);
			}
		}
	}
	return (0 - num);
}
