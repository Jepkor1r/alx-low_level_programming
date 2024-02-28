#include <stdio.h>

/**
  * main - program entry point
  *
  * Return: 0
  */

int main(void)
{
	char l_alphabet = 'a';
	char u_alphabet;

	while (l_alphabet <= 'z')
	{
		putchar(l_alphabet);
		for (u_alphabet = 'A'; u_alphabet <= 'Z'; u_alphabet++)
		{
			putchar(u_alphabet);
		}
		putchar('\n');
	}
	return (0);
}
