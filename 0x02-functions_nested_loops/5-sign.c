#include "main.h"
/**
 * print_sign - Function check sign
 *
 * @n: int
 *
 * Description: function check sign
 *
 * Return: 1 if plus , 0 if zero -1 if less
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
