/**
 * _isupper - program to check wether a lowercase char is entered
 * @c: is the character received from user
 *
 * Return: 1 if its true and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
