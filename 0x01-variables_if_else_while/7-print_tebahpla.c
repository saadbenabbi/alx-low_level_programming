#include <stdio.h>


/**
 * main - Entry program
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
		putchar(c--);
	putchar('\n');

	return (0);
}
