#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - this is where the program start running
 *Return:returns zero if error and non zero if no errors
 */

int main(void)
{

	int i;

	for (i = '0'; i <= '9' ; i++)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
