#include "main.h"

/**
  * print_sign - prints the sign of a number
  * @n: the character to check
  *
  * Return: 0
  */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	_putchar('\n');
	return (0);
}
