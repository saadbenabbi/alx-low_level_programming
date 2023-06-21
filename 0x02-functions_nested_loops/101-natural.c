#include "main.h"
/**
 * main - Entry number
 *
 * Description: natural
 *
 * Return: 0
 */
int main(void)
{
	int i, somme = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			somme += i;
	}
	printf("%d\n", somme);

	return (0);
}
