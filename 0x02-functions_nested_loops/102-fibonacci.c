#include "main.h"
/**
 * main - Entry
 *
 * Description: fibonnacy
 *
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long tab[50];

	tab[0] = 1;
	tab[1] = 2;
	printf("%ld, %ld, ", tab[0], tab[1]);

	for (i = 2; i < 50; i++)
	{
		tab[i] = tab[i - 1] + tab[i - 2];
		if (i == 49)
			printf("%ld\n", tab[i]);
		else
			printf("%ld, ", tab[i]);
	}

	return (0);
}
