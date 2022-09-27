#include "main.h"

/**
 *_strstr - locates a substring
 *@haystack: the string is searchedd
 *@needle: the substring is located
 *
 *Return: if the substring is located - pointer to begin at located substring
 *        if the substirng is not found - null
*/


char *_strstr(char *haystack, char *needle)
{
int i, j;

for (i = 0; haystack[i] > '\0'; i++)
{
	for (j = i; haystack[j] > '\0' && needle[j - i] > '\0'; j++)
	{
		if (haystack[j] != needle[j - i])
		{
			break;
		}
	}
	if (needle[j - i] == '\0')
	{
		return (haystack + i);
	}
}
return (0);
}