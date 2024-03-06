#include "main.h"

/**
  * _abs - computes the absolute value of an integer
  * @i: parameter is an integer
  *
  * Return: 0
  */

int _abs(int i)
{
	if (i < 0)
	{
		int abs_value;

		abs_value = i * -1;
		return (abs_value);
	}
	return (i);
}
