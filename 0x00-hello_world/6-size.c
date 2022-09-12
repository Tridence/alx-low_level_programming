#include <stdio.h>
/*
 * main - print the string in the print function
 *
 * Description: Printing the size o various comp types
 * this program prints the prints on comp sizes
 * return: 0
 */
int main(void) 
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("Print size of char: %d byte(s)\n", sizeof(c));
	printf("print size of int: %d byte(s)\n", sizeof(i));
	printf("Print size of long: %d byte(s)\n", sizeof(li));
	printf("Print size of long long: %d byte(s)\n", sizeof(lli));
	printf("Print size of float: %d byte(s)\n", sizeof(f));
	return (0);
}
