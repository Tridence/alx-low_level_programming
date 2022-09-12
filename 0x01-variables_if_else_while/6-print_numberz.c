#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - this is where the program start running
 *Return:returns zero if error and non zero if no errors
 */

int main(void)
{

int num;

num = 0;

while (num < 10)
{
	putchar(num + '0');
	num++;
}
	putchar('\n');

	return (0);
}
