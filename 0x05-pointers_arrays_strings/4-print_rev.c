#include "main.h"

/**
  * print_rev - prints a string, in reverse
  * @s: pointer variable
  *
  */

void print_rev(char *s)
{
	while (*s != '\0')
	{
		s++;
	}
	s--;
	while (*s >= 0)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
