#include "main.h"

/**
  * more_numbers - function that prints 10 times from 0 to 14, next a new line
  * 
  * Return: none
  */

void more_numbers(void)
{
	int i, num;

	for (i = 1; i <= 10; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num <= 9)
			{
				_putchar(num + '0');
			}
			if (num > 9)
			{
				_putchar(num / 10 + '0');
				_putchar(num % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
