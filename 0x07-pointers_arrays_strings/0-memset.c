/**
 * _memset -fills in constant bytes to a pinted memory area.
 * @s: the string which is filled in and pointed to by *s.
 * @b: the constant byte b specified by the user
 * @n: the first n bytes of the memory area to be filled in.
 *
 * Return: return a pinter *s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
