#include <stdio.h>

/**
 * main - prints all numbers of base16 in lowercase
 * Return: Always 0
 */
int main(void)
{
	int num;
	char lc;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (lc = 'a'; lc <= 'f'; lc++)
		putchar(lc);

	putchar ('\n');

	return (0);
}
