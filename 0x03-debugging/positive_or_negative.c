#include "main.h"

/**
  * positive_or_negative - prints if integer is positive or negative
  * @num: character to print
  *
  * Return: 0
  */

int positive_or_negative(int num)
{
	if (num > 0)
	{
		printf("%d is positive\n", num);
	}
	else if (num == 0)
	{
		printf("%d is zero\n", num);
	}
	else
	{
		printf("%d is negative\n", num);
	}
}
