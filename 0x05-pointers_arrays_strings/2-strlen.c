#include "main.h"

/**
  * _strlen - returns the length of a string
  * @s: pointer variable
  *
  * Return: 0
  */

int _strlen(char *s)
{
	int size;

	while (*s != '\0')
	{
		size = sizeof(*s) / sizeof(s[0]);
		size++;
	}
	return (size);
}
