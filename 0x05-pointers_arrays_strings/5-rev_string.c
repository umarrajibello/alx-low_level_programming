#include "main.h"
#include <string.h>
/**
 * rev_string - prints a str in rev
 * @str: the str to be printed
 *
 * Return: returns void.
 */
void rev_string(char *str)
{
	int len, i, tmp;

	len = strlen(str);
	for (i = 0; i < len / 2 ; i++)
	{
		tmp = *(str + i);
		*(str + i) = *(str + len - i - 1);
		*(str + len - i - 1) = tmp;
	}
}
