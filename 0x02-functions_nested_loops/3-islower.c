#include "main.h"
/**
 * _islower - Function check if a program is lowercase
 *
 * @c: char
 *
 * Description: function check lowercase
 *
 * Return: 1 if lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
