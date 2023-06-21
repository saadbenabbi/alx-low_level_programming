#include "main.h"
/**
 * print_to_98 - Function to print to 98
 *
 * @n: int
 *
 *
 * Description: function print
 *
 * Return: void print
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
			printf("%d, ", n);
	}
	else
	{
		for (n = n; n > 98; n--)
			printf("%d, ", n);
	}
	printf("98\n");
}
