#include <stdio.h>

/**
  * main - program entry point
  *
  * Return: 0
  */

int main(void)
{
	char l_alphabet;
	char u_alphabet;

	for (l_alphabet = 'a'; l_alphabet <= 'z'; l_alphabet++)
	{
		putchar(l_alphabet);
	}
	for (u_alphabet = 'A'; u_alphabet <= 'Z'; u_alphabet++)
	{
		putchar(u_alphabet);
	}
	putchar('\n');
	return (0);
}
