/**
 * swap_int - swaps the values of the integers
 * @a: this is the first integer received from user
 * @b: thsi is the second integer received from user
 *
 * Return: returns swapped values.
 */
int swap_int(int *a, int *b)
{
	int c;
	int d;

	c = *a;
	d = *b;
	return (*a = d, *b = c);
}
