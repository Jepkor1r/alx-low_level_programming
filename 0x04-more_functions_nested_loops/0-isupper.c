#include "main.h"

/**
  * _isupper - checks for uppercase character
  * @c: character to check
  *
  * Return: 1 if uppercase otherwise 0
  */

int _isupper(int c)
{
	if (c >= 32 && c <= 126)
	{
		if (c >= 65 && c <= 90)
		{
			return (1);
		}
	}
		return (0);
}
