#include "main.h"

/**
  * print_alphabet() - prints alphabet in lower case
  *
  * Return: 0
  */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
