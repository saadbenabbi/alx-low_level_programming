#include "main.h"
#define LARGNUMBER 10000000000
/**
 * main - Entry
 *
 * Description: fibonnacy
 *
 * Return: 0
 */
int main(void)
{
	unsigned long a1 = 0, a2 = 1;
	unsigned long b1 = 0, b2 = 2;
	unsigned long c1, c2, c3;
	int i;

	printf("1, 2");

	for (i = 3; i <= 98; i++)
	{
		c1 = (a2 + b2) / LARGNUMBER;
		c2 = (a2 + b2) % LARGNUMBER;
		c3 = a1 + b1 + c1;

		a1 = b1, a2 = b2;
		b1 = c3, b2 = c2;

		if (b1 > 0)
			printf(", %lu%lu", b1, b2);
		else
			printf(", %lu", b2);
	}

	printf("\n");
	return (0);
}
