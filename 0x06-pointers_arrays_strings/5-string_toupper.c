#include "main.h"

/**
 * string_toupper - converts lower case to upper case
 * @str: the string to check and convert
 *
 * Return: return the resultant string in upper case.
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
