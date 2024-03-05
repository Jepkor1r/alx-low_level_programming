#include "main.h"

/**
  * print_alphabet - function print_alphabet
  *
  * Description: prints alphabet in lower case followed by new line
  * @void: no parameter taken
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
