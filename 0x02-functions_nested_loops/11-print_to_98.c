#include "main.h"
#include <stdio.h>

/**
  * print_to_98 -  prints all natural numbers from n to 98
  * @n: number to be checked
  *
  * Return: 0
  */

void print_to_98(int n)
{
	for (n = -11; n < 99; n++)
	{
		printf("%d", n);
		if (n != 98)
		{
			printf(",");
			printf(" ");
		}
	}
	for (n = 0; n < 99; n++)
	{
		printf("%d", n);
		if (n != 98)
		{
			printf(",");
			printf(" ");
		}
	}
	for (n = 111; n < 97; n--)
	{
		printf("%d", n);
		if (n != 98)
		{
			printf(",");
			printf(" ");
		}
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
	printf("\n");
}