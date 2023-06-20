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
	if (n < 0)
	{
		_putchar(((n * -1) % 10) + '0');
		return (-n % 10);
	}
	_putchar((n % 10) + '0');
	return (n % 10);
}
