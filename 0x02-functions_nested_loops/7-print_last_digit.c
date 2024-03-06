#include "main.h"

/**
  * print_last_digit - prints the last digit of a number
  * @i: the number to be checked
  *
  * Return: 0
  */

int print_last_digit(int i)
{
	int last_digit = i % 10;

	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(last_digit + '0');
	_putchar('\n');
	return (last_digit);
}
