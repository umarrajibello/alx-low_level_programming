/**
 * _isdigit - program to check wether a lowercase char is entered
 * @c: is the character received from user
 *
 * Return: 1 if its true and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
