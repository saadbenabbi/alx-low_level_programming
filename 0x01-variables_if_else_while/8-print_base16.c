#include <stdio.h>

/**
 * main - Entry program
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 16; num++)
		putchar((num % 16 < 10) ? (num % 16 + '0') : (num % 16 - 10 + 'a'));
	putchar('\n');

	return (0);
}
