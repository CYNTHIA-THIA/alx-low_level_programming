#include <stdio.h>
/**
 * main - Entry point
 * Descriptio: 'print all possible combinations of single-digit'
 * Return: ALways 0
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n == 57)
		{
			continue;
		}
		putchar(',');
		pitchar(' ');
	}
	putchar('\n');
	return (0);
}
