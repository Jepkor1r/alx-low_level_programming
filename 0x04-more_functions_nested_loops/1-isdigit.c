#include "main.h"

/**
  * _isdigit - function that checks for a digit between 0 and 9
  * @c: tge value to checked
  *
  * Return: 1 if c is a digit otherwise 0
  */

int _isdigit(int c)
{
	if (c >= 32 && c <= 126)
	{
		if (c >= 48 && c <= 57)
		{
			return (1);
		}
	}
	return (0);
}
