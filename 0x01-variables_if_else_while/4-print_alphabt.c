#include <stdio.h>

/**
 * main - Entry program
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}

