#include "main.h"
/**
 * print_last_digit - Function last digit
 *
 * @n: int
 *
 * Description: function last digit
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int l;

	if (n < 0)
		l = -1 * (n % 10);
	else
		l = n % 10;
	_putchar(l + '0');
	return (l);
}
