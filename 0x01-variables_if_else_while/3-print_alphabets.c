#include <stdio.h>

/**
 * main - Entry program
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char	c = 'a';

	while (c <= 'z')
		putchar(c++);


	c = 'A';
	while (c <= 'Z')
		putchar(c++);
	putchar('\n');

	return (0);
}
