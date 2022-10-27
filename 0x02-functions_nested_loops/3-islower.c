/**
 * _islower - program to check wether a lowercase char is entered
 * @c: is the character received from user
 *
 * Return: 1 if its true and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
