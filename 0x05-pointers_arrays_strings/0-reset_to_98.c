#include "main.h"

/**
  * reset_to_98 - pointer is taken  int as parameter and updates it to 98
  * @n: derefencer
  *
  * Return: n
  */

void reset_to_98(int *n)
{
	*n = 98;
	_putchar(*n);
}
