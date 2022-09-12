#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - this is where the program start running
 *Return:returns zero if error and non zero if no errors
 */

int main(void)
{

	int alphabet;

	alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet == 'e')
		{
		}
		else if (alphabet == 'q')
		{
		}
		else
			putchar(alphabet);
		alphabet++;
	}
	putchar('\n');

	return (0);
}
