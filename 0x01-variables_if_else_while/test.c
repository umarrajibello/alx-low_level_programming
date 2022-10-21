#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char c;
	
	c = CHAR_MIN;
	while(c != CHAR_MAX)
	{
		printf("%d\n", c);
		c = c+1;
	}
	printf("The value of:\n minimum char is: %d, and \nmaximum char is: %d \n", CHAR_MIN, CHAR_MAX);
	exit(EXIT_SUCCESS);
}
