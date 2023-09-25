#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: a pointer to the beginning of tbe located substring
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
	char *i = haystack;
	char *j = needle;

while (*i == *j && *j != '\0')
{
i++;
j++;
}
if (*j == '\0')
return (haystack);
}
return (0);
}
