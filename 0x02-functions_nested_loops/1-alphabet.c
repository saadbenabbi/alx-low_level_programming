#include "main.h"
/**
 * print_alphabet - Function prints alphabet
 *
 * Description: Prints "Alphbet"
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char i;

	i = 'a';
	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
