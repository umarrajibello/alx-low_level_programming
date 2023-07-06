#include "main.h"

/**
 * string_toupper - converts lower case to upper case
 * @str: the string to check and convert
 *
 * Return: return the resultant string in upper case.
 */
char *string_toupper(char *str)
{
	for (; *str != '\0'; str++)
	{
		if (*str >= 'a' && *str <= 'z')
			*str = *str - 32;
	}
	return (str);
}
