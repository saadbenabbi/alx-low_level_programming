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
	int i, somme = 2;
	unsigned long tab[50];

	tab[0] = 1;
	tab[1] = 2;

	for (i = 2; i < 50; i++)
	{
		tab[i] = tab[i - 1] + tab[i - 2];
		if ((tab[i] % 2) == 0 && tab[i] < 4000000)
			somme += tab[i];
	}
	printf("%d\n", somme);

	return (0);
}
