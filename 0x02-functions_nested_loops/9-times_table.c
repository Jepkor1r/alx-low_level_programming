#include <stdio.h>

int times_table();

/**
  * main - prints the 9 times table, starting with 0
  * @void: empty parameter
  *
  * Return: 0
  */

int times_table()
{
	int i, result;
	
	for (i = 0; i <= 9; i++)
	{
		result = i * i;
		for (i = 0; i <= 9; i++)
		{
			result = i * i;
		}
	}
	 return result;
}

int main(void)
{
	int result = times_table();
	printf("%d\n", result);
	return (0);
}
