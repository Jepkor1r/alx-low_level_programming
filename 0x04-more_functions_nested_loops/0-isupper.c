#include "main.h"

/**
  * _isupper - checks for uppercase character
  * @c: character to check
  *
  * Return: 1 if uppercase otherwise 0
  */

int _isupper(int c)
{
	if (c <= 90)
	{
		c = 65;
		return (1);
	}
	else
	{
		return (0);
	}
}
