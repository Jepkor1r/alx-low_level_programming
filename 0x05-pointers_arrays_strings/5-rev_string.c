#include "main.h"

/**
  * rev_string - function that reverses a string
  * @s: pointer
  *
  */

void rev_string(char *s)
{
	char reverse, i;

	for (i = -1; i != '\0'; i--)
	{
		reverse = *s[i];
		_putchar(reverse);
	}
	_putchar('\n');
}
