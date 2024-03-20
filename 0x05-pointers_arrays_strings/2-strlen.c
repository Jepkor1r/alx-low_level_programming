#include "main.h"

/**
  * _strlen - returns the length of a string
  * @s: pointer variable
  *
  * Return: 0
  */

int _strlen(char *s)
{
	int size = 0;

	while (*s != '\0')
	{
		s++;
		size++;
	}
	return (size);
}
