#include "main.h"

/**
 * binary_to_uint - conversts binary to unsigned int
 * @b: a pointer to a character of bit strings
 *
 * Return: a converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, j = 0, num = 0;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (!((b[i] == '0') || (b[i] == '1')))
			return (0);
		i++;
	}

	while (b[j] == '0' || b[j] == '1')
	{
		num <<= 1;
		num += b[j] - '0';
		j++;
	}
	return (num);
}
