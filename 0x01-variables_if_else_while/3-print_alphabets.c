#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - this is where the program start running
 *Return:returns zero if error and non zero if no errors
 */

int main(void)
{

	int alphabet, ALPHABET;

	alphabet = 'a';

	ALPHABET = 'A';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	while (ALPHABET <= 'Z')
	{
		putchar(ALPHABET);
		ALPHABET++;
	}
	putchar('\n');

	return (0);
}
