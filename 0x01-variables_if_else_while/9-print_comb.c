#include <stdio.h>

/**
 * main - prints all possible combinations of single digit numbers
 * Return: Always 0
 */
int main(void)
{
	int p;

	for (p = 0; p <= 9; p++)
	{
		putchar(p + '0');
	if (p != 9)
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
