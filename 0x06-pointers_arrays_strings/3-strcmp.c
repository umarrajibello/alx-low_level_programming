#include <string.h>
/**
 * *_strcmp - concatenates two strings
 * @dest: the first string in question
 * @src: the second string in question
 * Return: return a bigger string after concatenation
 */
int _strcmp(char *dest, char *src)
{
	int i, j;
	i = 0;
	j = 0;

	while (*dest != '\0' && *src != '\0')
	{
		if (*dest > *src)
		{
			i++;
			return (1 * i);
		}
		if (*dest < *src)
		{
			j++;
			return (-1 * j);
		}
		dest++;
		src++;
	}
	return (0);
}
