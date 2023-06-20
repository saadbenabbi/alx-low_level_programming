#include "main.h"
/**
 * _isalpha - Function check if a program is alpha
 *
 * @c: char
 *
 * Description: function check is alpha
 *
 * Return: 1 if alpha
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
